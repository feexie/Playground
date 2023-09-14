#!/usr/bin/python3

""" Defines a class that inherits from Rectangle """
Rectangle = __import__('9-rectangle').Rectangle


class Square(Rectangle):
    """ class Square inherited from class Rectangle """
    def __init__(self, size):
        """ Initialises a new square """
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__size = size

    def area(self):
        """ returns the area of a square """
        return self.__size * self.__size

    def __str__(self):
        """ represents a square """
        return "[Square] {}/{}".format(self.__size, self.__size)
