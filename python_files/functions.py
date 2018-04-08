from urllib.request import urlopen
from urllib.request import URLError
import redis
import config
import strings


def is_internet_available():
    try:
        urlopen('https://google.com', timeout=2)
        return True
    except: urllib.URLError
    return False


def process_string(s):

    return "Return: "+s
