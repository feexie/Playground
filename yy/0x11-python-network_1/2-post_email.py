#!/usr/bin/python3
"""
A Python script that takes in a URL and an email, sends a POST request
to the passed URL with the email as a parameter, and displays the body
of the response (decoded in utf-8)
"""

import urllib.parse
import urllib.request
import sys


def main():
    """
    Sends a POST request to a URL with an email as a parameter and
    displays the body of the response (decoded in utf-8 )
    """
    if len(sys.argv) == 3:
        url = sys.argv[1]
        email = sys.argv[2]
        data = urllib.parse.urlencode({'email': email})
        data = data.encode('ascii')
        with urllib.request.urlopen(url, data) as response:
            print(response.read().decode('utf-8'))
    else:
        print("Usage: ./2-post_email.py <URL> <email>")


if __name__ == "__main__":
    main()
