#!/usr/bin/python3

""" Mandatory Task: 8.Class to JSON """


def class_to_json(obj):
    """ returns the dictionary description with sample
        data structure for JSON serialization of an
        object
    """
    return obj.__dict__
