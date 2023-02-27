#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: A pointer to the string to print.
 * Description: This function takes a pointer to a string and prints
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
