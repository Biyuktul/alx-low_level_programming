#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: the alphabet except e and q in lowercase, followed by a new line
 **/


int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');

return (0);
}
