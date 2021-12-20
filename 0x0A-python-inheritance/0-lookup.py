#!/usr/bin/python3
"""
This module contains one function: lookup
"""


def lookup(obj):
    """
    A function that returns the list of available attributes and methods of an object returns a list object
    """
    return dir(obj)
