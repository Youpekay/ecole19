#include <unistd.h>

int		deci_to_hex(int *deci,char *hex)
{
	int i, j, hex_mod;
	char c_tmp;

	i = 0;
	j = 0;

	while (*deci > 0)
	{
		hex_mod = *deci % 16;
		if (hex_mod == 10)
			hex[i] = 'a';
		else if (hex_mod == 11)
			hex[i] = 'b';
		else if (hex_mod == 12)
			hex[i] = 'c';
		else if (hex_mod == 13)
			hex[i] = 'd';
		else if (hex_mod == 14)
			hex[i] = 'e';
		else if (hex_mod == 15)
			hex[i] = 'f';
		else
			hex[i] = (*deci % 16) + 48;
		*deci /= 16;
		i++;
	}
	
	while (j < (i/2))
	{
		c_tmp = hex[j];
		hex[j] = hex[i - 1 - j];
		hex[i - 1 - j] = c_tmp;

		j++;
	}
	return (i);
}

int main(void)
{
	char hex[8];
	int deci;
	int hex_size;

	hex[0] = '-';
	hex[1] = '-';
	hex[2] = '-';
	hex[3] = '-';
	hex[4] = '-';
	hex[5] = '-';
	hex[6] = '-';
	hex[7] = '-';
	hex_size = 0;

	deci = 10;
	hex_size = deci_to_hex(&deci, hex);
	write(1, hex, hex_size);
}
