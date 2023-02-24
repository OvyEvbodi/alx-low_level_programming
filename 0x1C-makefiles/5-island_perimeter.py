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

    perimeter = 0
    if type(grid) == list and all(type(row) == list for row in grid)\
            and all(type(x) == int for row in grid for x in row)\
            and len(grid) <= 100:  # check row length
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    perimeter += 4
                    if i != 0 and grid[i - 1][j] == 1:
                        perimeter -= 1
                    if j != 0 and grid[i][j - 1] == 1:
                        perimeter -= 1
                    if j != len(grid[i]) - 1 and grid[i][j + 1] == 1:
                        perimeter -= 1
                    if i != len(grid) - 1 and grid[i + 1][j] == 1:
                        perimeter -= 1
        return perimeter
