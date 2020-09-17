#include <string.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int 	main(void)
{
	printf("%d", ft_atoi_base("+5---5  A046", "0123456789ABCDEF"));
}
