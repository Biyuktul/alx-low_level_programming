#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: print lower case then upper case
 */

int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}

c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
