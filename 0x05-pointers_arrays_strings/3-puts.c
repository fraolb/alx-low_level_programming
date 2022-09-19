#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: char type pointer
 * Return: length of string
 */

int _puts(char *s){
    int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}