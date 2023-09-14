#!/usr/bin/python3
''' Defines a class named Square '''


class Square:
    ''' class Square that defines a square '''

    def __init__(self, size=0):
        ''' Initialises a new square with a size '''

        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size musr be >= 0")
        self.__size = size

    def area(self):
        ''' Returns the area of a square '''
        return(self.__size * self.__size)
