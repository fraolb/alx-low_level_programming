#include "main.h"
#include <stdio.h>

/**
* _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
* s: an array
* Return: a pointer to the byte in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
    int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}