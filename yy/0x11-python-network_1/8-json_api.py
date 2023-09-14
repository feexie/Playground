#!/usr/bin/python3
"""
A Python script that takes in a letter and sends a POST request to
http://0.0.0.0:5000/search_user with the letter as a parameter
"""

import requests
import sys


if __name__ == "__main__":
    if len(sys.argv) == 1:
        q = ""
    else:
        q = sys.argv[1]
    response = requests.post("http://0.0.0.0:5000/search_user", data={"q": q})
    try:
        json_res = response.json()
        if json_res:
            print("[{}] {}".format(json_res.get("id"), json_res.get("name")))
        else:
            print("No result")
    except ValueError:
        print("Not a valid JSON")
