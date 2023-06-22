#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: char to be checked
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
