#!/usr/bin/python3

""" Defines a function that returns the JSON representation """
import json


def to_json_string(my_obj):
    """ return JSON representation of an object """
    return json.dumps(my_obj)
