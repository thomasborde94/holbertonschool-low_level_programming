#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * Description: returns a pointer to a 2D array of ints
 * @width: witdh of the 2d array
 * @height: height of the 2D array
 * Return: pointer to a 2D aerray of ints
 */

int **alloc_grind(int width, int height)
{
	int **2Darray;
	int 2dheight, 2dwidth;

	if (width <= 0 || height <= 0)
		return (NULL);

	2Darray = malloc(sizeof(int *) * height);

	if (2Darray == NULL)
		return (NULL);

	for (2dheigth = 0; 2dheigth < height; 2dheight++)
	{
		2Darray[2dheight] = malloc(sizeof(int) * width);
	}

	for (2dheight = 0; 2dheight < height; 2dheight++)
	{
		for (2dwidth = 0; 2dwidth < width; 2dwidth++)
			2Darray[2dheight][2dwidth] = 0;
	}

	return (2Darray)
}
