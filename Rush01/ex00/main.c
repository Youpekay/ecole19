void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_error(void);
int		ft_is_valid_input(char *str);
char	**ft_init_tab();
void	ft_display_tab(char **tab);
void	ft_kill_tab(char **tab);
int		ft_is_valid_tab(char **tab);
unsigned int		ft_start_calc(char **tab);

int		main(int argc, char **argv)
{
	char	**tab;
	char	*data;
	unsigned int	result;	

	if(argc != 2)
	{
		ft_putstr("No param");
		ft_display_error();
	}
	else
	{
		data = argv[1];
		if (ft_is_valid_input(data))
			ft_putstr("Correct input format\n");

			tab = ft_init_tab();
			ft_putstr("Tab initialized\n");

			if (ft_start_calc(tab))
				ft_display_tab(tab);
		}
		else
		{
			ft_putstr("Bad input");
			ft_display_error();
		}
			
	}
	return (0);
}