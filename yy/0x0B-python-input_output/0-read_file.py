#!/usr/bin/python3

""" Defines a function that reads a text file """


def read_file(filename=""):
    """ Reads text file and prints it to stdout """
    with open(filename, encoding="utf-8") as f:
        print(f.read(), end="")
