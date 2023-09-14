#!/usr/bin/python3

""" Defines a function that returns an object """
import json


def from_json_string(my_str):
    """ returns an object represented by a JSOn string """
    return json.loads(my_str)
