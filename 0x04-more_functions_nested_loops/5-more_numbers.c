include "main.h"

/**
<<<<<<< HEAD
 * more_numbers - print more numbers
=======
 * more_numbers - prints more numbers
 * Return: void
>>>>>>> b61e776c193d1a8b0597fb746fccf4a410e55290
 */

void more_numbers(void)
{
<<<<<<< HEAD
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
=======
	int t, i;

	t = 0;

	while (t < 10)
	{
	for (i = 0; i <= 14; i++)
	{
	if (i > 9)
	{
	_putchar((i / 10) + '0');
	}
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	t++;
>>>>>>> b61e776c193d1a8b0597fb746fccf4a410e55290
	}
}
