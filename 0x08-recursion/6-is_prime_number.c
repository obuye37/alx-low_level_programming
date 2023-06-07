/**
 * prime_checker - checks the value returned by is_prime_number function
 * for prime numbers
 * @x: base value
 * @y: iterator
 * Return: 0 if not prime and 1 if prime
 */

int prime_checker(int x, int y)
{
	if (y > x)
	{
		return (0);
	}
	else if (x / y == 1)
	{
		return (1);
	}

	return (prime_checker(x, y + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check
 * Return: always 1 or 0;
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0)
		return (0);

	return (prime_checker(n, 1));
}
