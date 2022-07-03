#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: the alphabet except e and q in lowercase, followed by a new line
 **/

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');

return (0);
}
