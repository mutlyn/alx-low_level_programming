#include "main.h"
/**
 * _strlen_recursion - Returns the lngth of string.
 * @s: The string to be msred.
 *
 * Return: The lngth of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
