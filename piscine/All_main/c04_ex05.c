#include <string.h>
#include <stdio.h>
#include <limits.h>

int		ft_atoi_base(char *str, char *base);

int 	main(void)
{
	printf("%d", ft_atoi_base("  +---101110", "01"));
	ft_putnbr_base("   --++-qwerty", "ytrewq");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base("+-++2147483648", "1598467");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base("-9", "01234456789");
}
