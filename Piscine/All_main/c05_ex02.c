#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("10^2 = %d\n", ft_iterative_power(10, 2));
	printf("10^0 = %d\n", ft_iterative_power(10, 0));
	printf("10^-1 = %d\n", ft_iterative_power(10, -1));
	printf("10^5 = %d\n", ft_iterative_power(10, 5));
	
	return (0);
}
