#!/usr/bin/python3

""" Defines a functions that checks if an object is an instance of a class """


def is_same_class(obj, a_class):
    """ checks if the object is exactly an instance of the class """
    return type(obj) == a_class
