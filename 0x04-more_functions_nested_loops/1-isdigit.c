#include "main.h"

/**
 * _isdigit - check if numbers are zero to nine
 * @c: char to be chckd
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
