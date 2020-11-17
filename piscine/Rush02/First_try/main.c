#include <unistd.h>
#include <stdlib.h>
#include "ft_fcts.h"

struct Nbr_dict *nbr_dic; 


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


int		is_only_0(char *str, int pos)
{
	int i;

	i = pos + 3;
	while(pos < i)
	{
		if(str[pos] != '0')
			return(0);
		pos++;
	}

	return (1);
}



void	cut_all_digits(char *number)
{
	int input_size;
	int nbr_trio;
	int nbr_mod;
	int i;
	int j;
	int pos;

	input_size = ft_strlen(number);
	nbr_trio = (input_size - 1) / 3;
	nbr_mod = input_size % 3;

	if(!nbr_mod)
		nbr_mod = 3;

	if(nbr_mod == 1)
			ternary_base(nbr_mod, '0', '0', number[0]);
	else if(nbr_mod == 2)
	{
		if(number[0] != '0')
			ternary_base(nbr_mod, '0', number[0], number[1]);
		else
			ternary_base(nbr_mod, '0', '0', number[1]);
	}
	else 
		ternary_base(nbr_mod, number[0], number[1], number[2]);
	
	i = 0;
	while (i < nbr_trio)
	{
		pos = nbr_mod + (i*3);

		if(!is_only_0(number, pos-3))
		{
			ft_putchar(' ');
			j = 0;
			while(1)
			{ 
				if((ft_strlen(nbr_dic[j].number_form) == (input_size - (nbr_mod - 1) - i*3)))
				{
					ft_putstr(nbr_dic[j].char_form);
					ft_putchar(' ');
					break ;
				}
				j++;
			}
			
		}
		
		ternary_base(3, number[pos], number[pos+1], number[pos+2]);
		

		i++;
	}

}


int main(int argc, char **argv)
{
	char	*input;

	char *custom_dict_path;
	if (argc == 3)
	{
		custom_dict_path = argv[1];
		input = argv[2];
	}
	else if (argc == 2)
		input = argv[1];
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	nbr_dic = ft_create_dict();
	cut_all_digits(input);
}

