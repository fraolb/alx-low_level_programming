#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: char type pointer
 * prints half of a string
 */

void puts_half(char *str)
{
    int c;

    for (c = 0; str[c] != '\0'; c++)
        ;

    c++;

    for (c/=2; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}