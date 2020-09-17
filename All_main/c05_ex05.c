#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int number;

	number = 1;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	//printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", 2147483647, ft_sqrt(2147483647));
	printf("sqrt(%ld) = %d\n", -2147483648, ft_sqrt(-2147483648));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
}
