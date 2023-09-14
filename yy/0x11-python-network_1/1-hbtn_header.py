#!/usr/bin/python3
"""
A Python script that takes in a URL, sends a request to the URL
and displays the value of the X-Request-Id variable found in
the header of the response
"""

import urllib.request
import sys


def main():
    """
    Sends a request to a URL and displays the value of the X-Request-Id
    variable found in the header of the response
    """
    if len(sys.argv) == 2:
        url = sys.argv[1]
        with urllib.request.urlopen(url) as response:
            headers = response.info()
            print(headers.get('X-Request-Id'))
    else:
        print("Usage: ./1-hbtn_header.py <URL>")


if __name__ == "__main__":
    main()
