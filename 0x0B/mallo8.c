#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
    //free a 2 dimensional grid
    
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);    
}