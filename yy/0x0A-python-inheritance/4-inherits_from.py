#!/usr/bin/python3

""" Defines a inherits_from function """


def inherits_from(obj, a_class):
    """
        checks if object is an instance of a class
        that inherited from the specified class

    """
    return issubclass(type(obj), a_class) and type(obj) != a_class
