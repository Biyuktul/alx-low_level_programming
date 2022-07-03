#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: printing numbers of base 16 in lower case
 **/

int main(void)
{
int num;
char c;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
