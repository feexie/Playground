#!/usr/bin/python3

""" Defines a class BaseGeometry """


class BaseGeometry:
    """ class represents base geometry """
    def area(self):
        """ public instance method """
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """ raise appropriate exception """
        if type(value) != int:
            raise TypeError("{} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{} must be greater than 0".format(name))
