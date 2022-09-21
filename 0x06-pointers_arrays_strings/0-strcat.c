#include "main.h"

/**
 * main - function that concatenates two strings.
 *
 * Return: pointer to the resulting string dest
 */

char _strcat(char *dest, char *src)
{   
    while(*(++dest));
    while(*(dest++) = *(src++));

    return (dest);
}