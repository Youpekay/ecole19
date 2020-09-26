#include <unistd.h>
#include <stdlib.h>

struct Nbr_dict {
	char	*number_form;
	char	*char_form;
};

struct Nbr_dict *nbr_dic; 

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		result = nb % 10 + 48;
		ft_putchar(result);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int real_size;
	int i;

	i = 0;
	real_size = ft_strlen(s1) >= ft_strlen(s2) ? ft_strlen(s1) : ft_strlen(s2);
	while (real_size-- > 0)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return ((s2[i] - s1[i]) * -1);
		i++;
	}
	return (0);
}


char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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


/*********************************************/



void	manage_units(char c)
{
	int i;

	i = -1;
	while (1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 1)
		{
			if (c == nbr_dic[i].number_form[0])
			{
				ft_putstr(nbr_dic[i].char_form);
				break ;
			}
		}
	}
}

void	manage_10_to_19(char c1, char c2)
{
	int i;

	i = -1;
	while(1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 2)
		{
			if(c1 == nbr_dic[i].number_form[0] && c2 == nbr_dic[i].number_form[1])
			{
				ft_putstr(nbr_dic[i].char_form);
				break ;
			}
		}
	}
}

void	manage_20_to_90(char c1, char c2)
{
	int i;

	i = -1;
	while(1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 2)
		{
			if(c1 == nbr_dic[i].number_form[0])
			{
				ft_putstr(nbr_dic[i].char_form);
				if(c2 != '0')
				{
					ft_putchar('-');
					manage_units(c2);
				}
					
				break ;
			}
		}
	}
}

void	manage_hundreds(char c)
{
	int i;
	i = 0;

	if(c != '0')
	{
		manage_units(c);
		ft_putchar(' ');
		while (1)
		{
			if(ft_strlen(nbr_dic[i].number_form) == 3)
			{
				ft_putstr(nbr_dic[i].char_form);
				break;
			}
			i++;
		}
		ft_putchar(' ');
	}
}


void	ternary_base(int size, char c1, char c2, char c3)
{
	
	if(size == 1)
	{
		manage_units(c3);
	}
	else if (size == 2)
	{
		if(c2 == '0')
			manage_units(c3);
		else if (c2 < '2')
			manage_10_to_19(c2, c3);
		else 
			manage_20_to_90(c2, c3);
	}
	else if(size == 3)
	{
		manage_hundreds(c1);
		if (c2 == '0')
		{
			if (c3 != '0')
				manage_units(c3);
		}
		else if (c2 < '2')
			manage_10_to_19(c2, c3);
		else 
			manage_20_to_90(c2, c3);
	}
}




void	cut_all_digits(char *number)
{
	int input_size;
	int nbr_trio;
	int nbr_mod;
	int i;
	int j;

	
	j = 0;
	input_size = ft_strlen(number);
	nbr_trio = (input_size - 1) / 3;
	nbr_mod = input_size % 3;

	if(!nbr_mod)
		nbr_mod = 3;

	if(nbr_mod == 1 && number[0] != '0')
	{
		ternary_base(nbr_mod, '0', '0', number[0]);
	}
	else if( nbr_mod == 2)
	{
		if(number[0] != '0')
			ternary_base(nbr_mod, '0', number[0], number[1]);
		else
			ternary_base(nbr_mod, '0', '0', number[1]);
	}
	else 
	{
		ternary_base(nbr_mod, number[0], number[1], number[2]);
	}
	
	i = 0;
	while (i < nbr_trio)
	{
		ft_putchar(' ');
		j = 0;
		while(1)
		{
			if(ft_strlen(nbr_dic[j].number_form) == (input_size - (nbr_mod - 1) - i*3) )
			{
				ft_putstr(nbr_dic[j].char_form);
				break ;
			}
			j++;
		}

		ft_putchar(' ');
		ternary_base(3, number[nbr_mod + (i*3)], number[nbr_mod + (i*3)  + 1], number[nbr_mod + (i*3)+2]);

		i++;
	}
	/*
	if(input_size == 3)
		ternary_base(input_size, number[0], number[1], number[2]);
	else if(input_size == 2)
	{
		if(number[0] != '0')
			ternary_base(input_size, '0', number[0], number[1]);
		else
			ternary_base(input_size, '0', '0', number[1]);
	}
	else if(input_size == 1 && number[0] != '0')
		ternary_base(input_size, '0', '0', number[0]);
	*/
}

void	add_dict_entries()
{
	nbr_dic = malloc(28 * sizeof(struct Nbr_dict));

	nbr_dic[0].number_form = "0";
	nbr_dic[0].char_form = "zero";

	nbr_dic[1].number_form = "1";
	nbr_dic[1].char_form = "one";

	nbr_dic[2].number_form = "2";
	nbr_dic[2].char_form = "two";

	nbr_dic[3].number_form = "3";
	nbr_dic[3].char_form = "three";

	nbr_dic[4].number_form = "4";
	nbr_dic[4].char_form = "four";

	nbr_dic[5].number_form = "5";
	nbr_dic[5].char_form = "five";

	nbr_dic[6].number_form = "6";
	nbr_dic[6].char_form = "six";

	nbr_dic[7].number_form = "7";
	nbr_dic[7].char_form = "seven";

	nbr_dic[8].number_form = "8";
	nbr_dic[8].char_form = "eight";

	nbr_dic[9].number_form = "9";
	nbr_dic[9].char_form = "nine";

	nbr_dic[10].number_form = "10";
	nbr_dic[10].char_form = "ten";

	nbr_dic[11].number_form = "11";
	nbr_dic[11].char_form = "eleven";

	nbr_dic[12].number_form = "12";
	nbr_dic[12].char_form = "twelve";

	nbr_dic[13].number_form = "13";
	nbr_dic[13].char_form = "thirteen";

	nbr_dic[14].number_form = "14";
	nbr_dic[14].char_form = "fourteen";

	nbr_dic[15].number_form = "15";
	nbr_dic[15].char_form = "fifteen";

	nbr_dic[16].number_form = "16";
	nbr_dic[16].char_form = "sixteen";

	nbr_dic[17].number_form = "17";
	nbr_dic[17].char_form = "seventeen";

	nbr_dic[18].number_form = "18";
	nbr_dic[18].char_form = "eighteen";

	nbr_dic[19].number_form = "19";
	nbr_dic[19].char_form = "nineteen";

	nbr_dic[20].number_form = "20";
	nbr_dic[20].char_form = "twenty";

	nbr_dic[21].number_form = "30";
	nbr_dic[21].char_form = "thirty";

	nbr_dic[22].number_form = "40";
	nbr_dic[22].char_form = "forty";

	nbr_dic[23].number_form = "50";
	nbr_dic[23].char_form = "fifty";

	nbr_dic[24].number_form = "60";
	nbr_dic[24].char_form = "sixty";

	nbr_dic[25].number_form = "70";
	nbr_dic[25].char_form = "seventy";

	nbr_dic[26].number_form = "80";
	nbr_dic[26].char_form = "eighty";

	nbr_dic[27].number_form = "90";
	nbr_dic[27].char_form = "ninety";

	nbr_dic[28].number_form = "100";
	nbr_dic[28].char_form = "hundred";

	nbr_dic[29].number_form = "1000";
	nbr_dic[29].char_form = "thousand";

	nbr_dic[30].number_form = "1000000";
	nbr_dic[30].char_form = "million";

	nbr_dic[31].number_form = "1000000000";
	nbr_dic[31].char_form = "billion";

	nbr_dic[32].number_form = "-1";
	nbr_dic[32].char_form = "";
}

int main(int argc, char **argv)
{
	if(argc != 2)
		return (0);

	char	*input;
	//int		input_int;

	add_dict_entries();
	input = argv[1];
	//input_int = ft_atoi(input);

	cut_all_digits(input);

	
}

