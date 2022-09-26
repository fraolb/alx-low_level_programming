#include "main.h"

/**
 * main - function that copies memory area.
 * char *dest, char *src are a pointer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for(i=0; i<n; i++)
    {
        dest[i]=src[i];
    }
    return dest;
}