#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * Description: returns a pointer to a 2D array of ints
 * @width: witdh of the 2d array
 * @height: height of the 2D array
 * Return: pointer to a 2D aerray of ints
 */

int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int twoDheight, twoDwidth;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDarray = malloc(sizeof(int *) * height);

	if (twoDarray == NULL)
		return (NULL);

	for (twoDheight = 0; twoDheight < height; twoDheight++)
	{
		twoDarray[twoDheight] = malloc(sizeof(int) * width);

		/*free everything if malloc fails*/
		if (twoDarray[twoDheight] == NULL)
		{
			for (; twoDheight >= 0; twoDheight--)
				free(twoDarray[twoDheight]);

			free(twoDarray);
			return (NULL);
	}

	for (twoDheight = 0; twoDheight < height; twoDheight++)
	{
		for (twoDwidth = 0; twoDwidth < width; twoDwidth++)
			twoDarray[twoDheight][twoDwidth] = 0;
	}

	return (twoDarray);
}
