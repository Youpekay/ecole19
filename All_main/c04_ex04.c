#include <string.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
//int		ft_atoi(char *str);

int		main(void)
{
	printf("%d", ft_putnbr_base(234, "0123456789ABCDEF"));
	//printf("%d", ft_atoi("9    -+ 8 7   -500"));
	return (0);
}
