#!/usr/bin/python3
"""A Python script that fetches https://alx-intranet.hbtn.io/status"""

import urllib.request


def main():
    """Fetches url and displays the body of the response"""
    with urllib.request.urlopen('https://alx-intranet.hbtn.io/status') as res:
        body = res.read()
        print("Body response:")
        print("\t- type: {}".format(type(body)))
        print("\t- content: {}".format(body))
        print("\t- utf8 content: {}".format(body.decode('utf-8')))


if __name__ == "__main__":
    main()
