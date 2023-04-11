#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - free 2 dimension array
 * @grid: 2 dimension grid
 * @height: 2 dimension grid height
 * description: free memory of grid
 * return: 0
 */
void free_grid(int **grid, int height)
{
int g;
for (g = 0; g < height; g++;
{
free(grid[g]);
}
free(grid);
}
