#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	index = -2;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}
