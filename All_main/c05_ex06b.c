#include <stdio.h>
#include <limits.h>
#include <math.h>

int ft_is_prime(int nb);

int	is_prime(int prime)
{
	int	i;
	int	sq;

	if (prime <= 1)
		return (0);
	sq = (int)sqrt(prime);
	for (i = 2; (i <= sq) && (prime % i != 0); i++);
	return (i > sq);
}

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 500000)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}
