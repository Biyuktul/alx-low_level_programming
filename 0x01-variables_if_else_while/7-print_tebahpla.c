#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: the alphabet except e and q in lowercase, followed by a new line
 **/

int main(void)
{
char c;

c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}
