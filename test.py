import requests
from bs4 import BeautifulSoup


url = 'https://www.pcgarage.ro/notebook-laptop/asus/156-vivobook-15-x513ea-fhd-procesor-intel-core-i5-1135g7-8m-cache-up-to-420-ghz-8gb-ddr4-512gb-ssd-intel-iris-xe-no-os-black-1/'
data = requests.get(url)
print(data.text)
print(data)