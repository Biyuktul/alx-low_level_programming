#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: combination of numbers
 **/
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;

putchar(',');
putchar(' ');
};

return (0);
}
