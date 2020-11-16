#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	*a;
	char	*b;
	int		result1;
	int		result2;

	a = "Bonjour*";
	b = "Bonjou/";
	result1 = 0;
	result2 = 0;
	result1 = strncmp(a, b, 8);
	result2 = ft_strncmp(a, b, 8);
	printf("%d", result1);
	printf(" || %d", result2);
	return (0);
}
