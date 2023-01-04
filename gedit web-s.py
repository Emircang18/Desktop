from selenium import webdriver
from bs4 import BeautifulSoup
import pandas as pd

driver = webdriver.Chrome("/users/kalps/Appdata/local/chromium-browser/chromedriver")
url="https://www.imdb.com/chart/top/"
products=[] 
ratings=[] 
driver.get(url)
content = driver.page_source
soup = BeautifulSoup(content,'html.parser')
for a in soup.findAll('a',href=True, attrs={'class':'lister-list'}):
    name=a.find('div', attrs={'class':'titleColumn'})
    rating=a.find('div', attrs={'class':'ratingColumn imdbRating'})
    products.append(a.text)
    ratings.append(rating.text),
print(products.strip())