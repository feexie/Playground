#!/usr/bin/python3
"""
A Python script that takes your GitHub credentials (username and password)
and uses the GitHub API to display your id
"""

import requests
import sys


if __name__ == "__main__":
    username = sys.argv[1]
    password = sys.argv[2]
    r = requests.get("https://api.github.com/user", auth=(username, password))
    json_res = r.json()
    print(json_res.get("id"))
