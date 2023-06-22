#include "main.h"
/**
 *  _isupper - Checks if a char is uppercase
 *  @c: The char to be checked
 *  Return: 1 for uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
