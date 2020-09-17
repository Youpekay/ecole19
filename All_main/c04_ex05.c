#include <string.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int 	main(void)
{
	printf("%d", ft_atoi_base("  +---1011A10", "0123456789ABCDEF"));
}
