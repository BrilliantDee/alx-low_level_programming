#include "main.h"

/**
* print_numbers - Prints numbers 0-9
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue; /*Skips iteration of 2 and 4*/
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
