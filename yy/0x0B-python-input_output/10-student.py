#!/usr/bin/python3

""" Python - Input/Output 10.Student to JSON with filter """


class Student:
    """ Represents a student """
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """ retrieves a dictionary representation of a Student """
        if attrs is None:
            return self.__dict__
        dict = {}
        for e in attrs:
            if hasattr(self, e):
                dict[e] = getattr(self, e)
        return dict
