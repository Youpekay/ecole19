#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *str;
	int result;
	
	str = "9 -8816 4 \n\r+-+-1271ab567";
	result = ft_atoi(str);
	printf("%d || ", result);
	printf("%d", atoi(str));

	return (0);
}
