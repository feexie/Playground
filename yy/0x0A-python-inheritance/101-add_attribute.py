#!/usr/bin/python3

""" Defines a function that adds new attributes to objects """


def add_attribute(obj, attr, value):
    """ adds attribute to an object """
    if not hasattr(obj, '__dict__'):
        raise TypeError("can't add new attribute")
    setattr(obj, attr, value)
