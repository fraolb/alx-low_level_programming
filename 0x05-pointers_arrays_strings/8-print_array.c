#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: char type pointer
 * prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
    int i;

    for(i=0; i == n; i++)
    {
        _putchar(a[i]);
    }

    _putchar('\n');
}