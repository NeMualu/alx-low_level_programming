#!/usr/bin/python3
"""
Function Island perimeter
"""


def island_perimeter(grid):
    """
    Argument is a grid
    Sum side x  row by row and find the max value
    Sum side y column by column and find the max value
    Return the parameter
    """
    width = []
    height = []
    per = 0
    for x in range(len(grid)):
        w = 0
        for y in range(len(grid[0])):
            if grid[x][y] is 1:
                w = w + grid[x][y]
        width.append(w)
    for x in range(len(grid[0])):
        h = 0
        for y in range(len(grid)):
            if grid[y][x] is 1:
                h = h + grid[y][x]
        height.append(h)
    h = max(height)
    w = max(width)
    if h == 1 and w == 1:
        per = 1
    else:
        if h == 1:
            per = w
        elif w == 1:
            per = h
        else:
            per = 2 * (h + w)
    return per
