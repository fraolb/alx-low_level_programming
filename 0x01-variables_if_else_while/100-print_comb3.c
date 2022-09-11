#include <stdio.h>

/**
 *
 *  * main - main block
 *
 *   * Description: Print all possible combinations of two digits.
 *
 *    * Numbers must be separated by commas and a space.
 *
 *     * 01 and 10 are considered as the same combination of the two digits.
 *
 *      * Print only the smallest combination of two digits.
 *
 *       * Numbers should be printed in ascending order, with two digits.
 *
 *        * You can only use `putchar`.
 *
 *         * You can only use `putchar` up to 5 times.
 *
 *          * You are not allowed to use any variable of type `char`.
 *
 *           * Return: 0
 */

int main(void)
{
	int d, j;

	for (d = 0; d <= 8; d++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (d < j)									{											putchar(d + '0');
				putchar(j + '0');																		if (d != 8 || j != 9)								{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
