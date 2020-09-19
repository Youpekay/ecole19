#include <unistd.h>
#include <stdlib.h>

extern char **g_tab;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(unsigned int nb)
{
	char	result;

	//if (nb == -2147483648)
		//write(1, &"-2147483648", 11);
	//else
	//{
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
	//}
}

void	ft_display_error(void)
{
	ft_putstr("Error\n");
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_init_tab()
{
	int		x;
	int		y;

	if (!(g_tab = malloc(4 * sizeof(char*))))
		return ;
	y = -1;
	while (++y < 4)
	{
		if (!(g_tab[y] = malloc(4 * sizeof(char))))
			return ;
		x = -1;
		while (++x < 4)
			g_tab[y][x] =  0;
	}
}

void	ft_display_tab(char **tab)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(tab[y][x] + '0');
			if (++x < 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}

void	ft_kill_tab(char **tab)
{
	int nbrLN;

	nbrLN = 4;
	while (nbrLN--)
		free(tab[nbrLN - 1]);
	free(tab);
}

int		ft_is_valid_input(char *str)
{
    int str_size;
    int t_size;
    int i;

	//ft_putstr(str);
    str_size = ft_strlen(str);
    t_size = 0;
    i = 0;
    while(i < str_size)
    {
        if (str[i] >= '1' && str[i] <= '4')
        {
            t_size++;
            if (i > 0)
			{
				if (str[i-1] != 32)
				{
					ft_putstr("No space before digit\n");
					ft_putnbr(str[i] - 1);
					return (0);
				}
			}
                  
            i += 2;
        }
        else
		{
			ft_putstr("Bad char format\n");
			return (0);
		}
           
    }

	//ft_putnbr(t_size);

    if (t_size == 16)
        return (1);
    else
        return (0);
}

void	ft_data_nospace(char *data, char *data_valid)
{
	int k;
	int l;

	k = 0;
	l = 0;
	while (data[k] != '\0')
	{
		if (k % 2 == 0 && l < 16)
        {
            data_valid[l] = data[k];
            l++;
        }
			
		k++;
	}

}
