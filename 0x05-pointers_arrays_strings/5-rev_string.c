#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i, tmp, sam = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + sam - i - 1);
		*(s + sam - i - 1) = tmp;
	}
}

/**
 * _strlen - return string length
 * @s: string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int sam = 0;

	while (*(s + sam) != '\0')
		sam++;

	return (sam);
}
