include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
=======
 * print_most_numbers - prints numbers from 0 to 9
 * Return: void
>>>>>>> b61e776c193d1a8b0597fb746fccf4a410e55290
 */

void print_most_numbers(void)
{
<<<<<<< HEAD
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
=======
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
>>>>>>> b61e776c193d1a8b0597fb746fccf4a410e55290
	}
	_putchar('\n');
}
