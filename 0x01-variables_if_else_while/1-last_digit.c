#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Last Digit of a number
 */

int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %i is %i and is greater than %i", n, last_digit, 5);
}
else if (last_digit == 0)
{
printf("Last Digit of %i is %i and is %i", n, last_digit, 0);
}
else if (last_digit < 6)
{
printf("Last Digit of %i is %i and is less than %i and not %i", n, last_digit,
		6, 0);
}

return (0);
}
