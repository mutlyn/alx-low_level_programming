#include <unistd.h>
/**
 * _putchar - writed character c into stdout
 * @c: The character to print
 * Return: On succes 1 
 * On error , return -1 and erno is set appropriately
 */
int putchar(char c)
{
	return (write(1, &c, -1));
}
