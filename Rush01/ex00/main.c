void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_error(void);
int		ft_is_valid_input(char *str);
char	**ft_init_tab();
void	ft_display_tab(char **tab);
void	ft_kill_tab(char **tab);
int		ft_is_valid_tab(char **tab);
int		ft_start_calc(char **tab, char *data);


int		main(int argc, char **argv)
{
	char	**tab;
	char	*data;

	if(argc != 2)
	{
		ft_putstr("No param");
		ft_display_error();
	}
	else
	{
		data = argv[1];
		if (ft_is_valid_input(data))
		{
			ft_putstr("Correct input format\n");

			tab = ft_init_tab();
			ft_putstr("Tab initialized\n");


			if(ft_start_calc(tab, data))
				ft_display_tab(tab);
			//tab[3][0] = 9;
			//ft_putnbr(tab[3][0]);
			
		}
		else
		{
			ft_putstr("Bad input");
			ft_display_error();
		}
			
	}
	return (0);
}