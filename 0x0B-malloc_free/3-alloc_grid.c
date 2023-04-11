#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - points to an array of 2 dimensional array of int
 * @width: input width
 * @height: input height
 * return: pointer to 2 dimension array
 */
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;
if (width <= 0 || heiht <= 0)
	return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
	return (NULL);
for (x = 0; x < height; x++)
{
grid[x] = malloc(sizeof(int) * width);
if (grid[x] == NULL)
{
for (; x >= 0; x--)
free(grid[x]);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
grid[x][y] = 0;
}
return (grid);
}
