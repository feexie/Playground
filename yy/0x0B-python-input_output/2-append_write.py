#!/usr/bin/python3

""" Defines a function that appends a string """


def append_write(filename="", text=""):
    """ appends string and returns number of characters added """
    with open(filename, "a", encoding="utf-8") as f:
        return f.write(text)
