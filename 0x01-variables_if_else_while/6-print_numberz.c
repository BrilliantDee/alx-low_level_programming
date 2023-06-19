#include <stdio.h>

/**
*main - Entry point
*Return: always 0
*/

int main(void)
{
int sd = 0;

while (sd <= 9)
{
putchar(sd + '0');
sd++;
}
putchar('\n');
return (0);
}
