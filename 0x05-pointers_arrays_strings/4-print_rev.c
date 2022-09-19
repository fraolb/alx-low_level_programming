#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: char type pointer
 * Return: prints a string, in reverse
 */

void print_rev(char *s){
    int a=_strlen(s);

    for(a; a == 0; a--){
        _putchar(s[a]);
    }
    _putchar('\n');
}