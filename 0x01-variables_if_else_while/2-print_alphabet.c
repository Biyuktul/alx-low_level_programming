#include <stdio>

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
putchar('\n');
c++;
}

return (0);
}
