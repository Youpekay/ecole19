#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*a;
	char	*b;
	int		result1;
	int		result2;

	a = "Hello";
	b = "Hello";
	result1 = 0;
	result2 = 0;
	result1 = strcmp(a, b);
	result2 = ft_strcmp(a, b);
	printf("%d", result1);
	printf(" || %d", result2);
	return (0);
}
