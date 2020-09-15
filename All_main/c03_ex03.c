#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	*str_base;
	char	dest[1000];
	char	dest2[1000];
	char	*src;
	int		index;

	str_base = "Td11";
	src = " Wos4";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 5));
	printf("ft : %s$\n", ft_strncat(dest2, src, 5));
}
