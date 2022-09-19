#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: char type pointer
 * prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
    int i;

    i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}