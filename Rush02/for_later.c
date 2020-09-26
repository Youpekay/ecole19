char	*malloc_array_size(int size)
{
	char	*result;
	result = malloc((size+1) * sizeof(char));

	return (result);
}


char	*remove_useless_zero(char *nbr)
{
	char *result;

	if(nbr[0] == '0')
	{
		if(nbr[1] == '0')
		{
			if(nbr[2] == '0')
			{
				result = malloc_array_size(1);
				result[0] = '\0';
			}
				
			else
			{
				result = malloc_array_size(2);
				result[0] = nbr[2];
				result[1] = '\0';
			}
				
		}
		else
		{
			result = malloc_array_size(3);
			result[0] = nbr[1];
			result[1] = nbr[2];
			result[2] = '\0';
		}
			
	}
	else
	{
		result = malloc_array_size(4);
		result[0] = nbr[0];
		result[1] = nbr[1];
		result[2] = nbr[2];
		result[3] = '\0';
	}

	return (result);
}


/* ********************************** */

int		is_ignored(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int		is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int result;
	int negative;

	negative = 1;
	result = 0;
	while (is_ignored(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (is_numeric(*str))
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * negative);
}


/******************************* */

result = malloc(ft_strlen(nbr_dic[i].char_form) * sizeof(char));
			result = ft_strcpy(result, nbr_dic[nbr].char_form);
			ft_putstr(result);