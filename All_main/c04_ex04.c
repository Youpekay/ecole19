#include <string.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
//int		ft_atoi(char *str);

int		main(void)
{
	ft_putnbr_base(234, "0123456789ABCDEF");
	return (0);
}
