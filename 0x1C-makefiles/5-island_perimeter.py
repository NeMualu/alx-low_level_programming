#!/usr/bin/python3
"""
Function Island perimeter
"""
def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid (list): List of lists of integers representing the island.

    Returns:
        int: Perimeter of the island.

    Description:
        Traverse the land mass and for each land cell,
        check its neighbors to calculate the total perimeter.

    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Deduct 2 for shared edge with left neighbor

                # Check top neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Deduct 2 for shared edge with top neighbor

    return perimeter

