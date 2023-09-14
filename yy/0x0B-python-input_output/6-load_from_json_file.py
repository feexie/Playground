#!/usr/bin/python3

""" Defines a function that creates an object """
import json


def load_from_json_file(filename):
    """ creates an object from a JSON file """
    with open(filename, "r", encoding="utf-8") as f:
        return json.load(f)
