#include <stdio.h>

/**
*main - Entry point
*Return: always 0
*/

int main(void)
{
int h;

for (h = 48; h < 58; h++)
{
putchar(h);
}
for (h = 97; h < 103; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
