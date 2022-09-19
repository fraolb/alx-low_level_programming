#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: char type pointer
 * prints half of a string
 */

void puts_half(char *str)
{
    int c, a;

    for (c = 0; str[c] != '\0'; c++)
        ;
    a = c/2;

    for (a; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}