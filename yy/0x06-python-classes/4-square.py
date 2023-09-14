#!/usr/bin/python3
''' Defines a class named Square '''


class Square:
    ''' class square that defones a square '''

    def __init__(self, size=0):
        ''' Initialises a new square with a size '''
        self.__size = size

    @property
    def size(self):
        ''' getter method '''
        return self.__size

    @size.setter
    def size(self, value):
        ''' setter method '''

        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        ''' Returns the area of a square '''
        return(self.__size * self.__size)
