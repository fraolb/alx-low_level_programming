#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: char type pointer
 * Return: prints a string, in reverse
 */

print_rev(char *str){
    int a=_strlen(str);

    for(a; a == 0; a--){
        _putchar(str[a]);
    }
    _putchar('\n');
}