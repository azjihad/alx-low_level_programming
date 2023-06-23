#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long largest_factor = -1;
	long i;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_factor = n;

	return largest_factor;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime;

	largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return 0;
}
