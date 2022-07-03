#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: English lowercase Alphabets
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
putchar('\n');

return (0);
}
