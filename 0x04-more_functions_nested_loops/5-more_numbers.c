#include "main.h"

/**
* print_numbers - Prints numbers 0-9
*/

void more_numbers(void)
{
	int line, digits;

	for (line = 0; line <= 9; line++)
	{
		for (digits = 0; digits <= 14; digits++)
		{
			if (digits > 9)
				_putchar((digits / 10) + '0');
			_putchar((digits % 10) + '0');
		}
		_putchar('\n');
	}
}
