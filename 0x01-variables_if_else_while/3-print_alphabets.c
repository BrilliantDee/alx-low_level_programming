#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char u = 'a';
	char l = 'A';

	while (u <= 'z')
	{
		putchar(u);
		u++;
	}
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
