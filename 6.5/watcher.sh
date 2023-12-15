#!/bin/bash

path="./"

fswatch -r "$path" |
while read -r fullpath
do
  # Your action here
  filename=$(basename "$fullpath")
    filename_no_extension="${filename%.*}"
    echo "File $filename has been modified."

  if [[ -f "$fullpath" && "$filename" != *~  && "$filename" == *.cpp ]]; then
    make target name=$filename_no_extension
  fi

done

