#!/usr/bin/python3

"""This module computes the perimeter of a rectangle island
as described by ``grid``. It contains 1 funtion ``island_perimeter``.
"""


def island_perimeter(grid):
    """Calculates the perimeter of an island as described by grid

    Args:
        grid (int): the grid that dscribes the island

    Returns:
        The perimeter of the rectangle
    """

    width, height, pos, perimeter = 0, 0, 0, 0
    if type(grid) == list and all(type(row) == list for row in grid)\
            and all(type(x) == int for row in grid for x in row):
        for i in range(len(grid)):
            if i == 0 or i == len(grid) - 1:
                for j in range(len(grid[i])):
                    if grid[i][j] != 0:
                        return
            for j in range(len(grid[i])):
                if (j == 0 or j == len(grid[i]) - 1) and grid[i][j] != 0:
                    return
                if grid[i][j] == 1 and not width and height <= 100:
                    height += 1
                    if height == 1:
                        pos = j
                    if j != len(grid[i]) - 1 and grid[i][j + 1] == 1:
                        while grid[i][j] == 1 and width <= 100:
                            width += 1
                            j += 1
        perimeter = 2 * (width + height)
        return perimeter
