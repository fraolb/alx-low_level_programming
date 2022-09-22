#include "main.h"

/**
 * main - function that copies a string.
 *
 * Return: pointer to the result
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}