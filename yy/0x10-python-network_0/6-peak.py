#!/usr/bin/python3
"""
This module defines a function to find a peak in a list of unsorted integers
"""

def find_peak(list_of_integers):
    """
    Finds a peak in a list of unsorted integers

    Args:
        list_of_integers (list): a list of unsorted integers

    Returns:
        int: the peak integer in the list

    Raises:
        ValueError: if the list is empty or None
    """
    if not list_of_integers:
        raise ValueError("List cannot be empty or None")
    n = len(list_of_integers)
    if n == 1:
        return list_of_integers[0]
    if n == 2:
        return max(list_of_integers)
    mid = n // 2
    if list_of_integers[mid] < list_of_integers[mid - 1]:
        return find_peak(list_of_integers[:mid])
    elif list_of_integers[mid] < list_of_integers[mid + 1]:
        return find_peak(list_of_integers[mid + 1:])
    else:
        return list_of_integers[mid]

