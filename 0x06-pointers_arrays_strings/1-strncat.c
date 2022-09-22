#include "main.h"

/**
 * main - function that concatenates two strings.
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    while(*(++dest));
    do
    {
        while(*(dest++) = *(src++));
    } while (src[n]);  

    return (dest);
}