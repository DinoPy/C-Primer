#!/bin/bash

path="./"

fswatch -r "$path" |
while read -r fullpath
do
  # Your action here
  filename=$(basename "$fullpath")
    filename_no_extension="${filename%.*}"

  if [[ -f "$fullpath" && "$filename" != *~  && "$filename" == *.cpp ]]; then
    echo "File $filename has been modified."
    make target name="$filename_no_extension"
  fi

done

