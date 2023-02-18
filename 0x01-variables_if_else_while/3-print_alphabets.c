Task 3
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then after in  uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
