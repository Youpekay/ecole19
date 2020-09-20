#include <unistd.h>
#include <stdlib.h>

int     ft_is_valid_tab(int x, int y, int n);

extern char **g_tab;
extern char *data;
extern char *data_valid;

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

void	ft_display_tab()
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(g_tab[y][x] + '0');
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

int		ft_is_valid_input()
{
    int str_size;
    int t_size;
    int i;

    str_size = ft_strlen(data);
    t_size = 0;
    i = 0;
    while(i < str_size)
    {
        if (data[i] >= '1' && data[i] <= '4')
        {
            t_size++;
            if (i > 0)
			{
				if (data[i-1] != 32)
				{
					ft_putstr("No space before digit\n");
					ft_putnbr(data[i] - 1);
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

    if (t_size == 16)
        return (1);
    else
        return (0);
}


void	ft_data_nospace()
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(data);

	while(i < size)
	{
		if(data[i] >= '1' && data[i] <= '4')
		{
			data_valid[j] = data[i];
			j++;
		}
		i++;
	}
	data_valid[j] = '\0';
}


int		ft_is_filled_tab()
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if(g_tab[x][y] == 0)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_reset_tab()
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (x < 4)
	{
		while (y < 4)
		{
			g_tab[x][y] = 0;
			y++;
		}
		x++;
	}
}
