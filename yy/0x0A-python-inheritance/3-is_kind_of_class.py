#!/usr/bin/python3

"""
    Defines a class that checks if an object
    is an instance or inherited instance
    of the specified class

"""


def is_kind_of_class(obj, a_class):
    """ checks if objects is an instance """
    return isinstance(obj, a_class)
