#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_error(void);
int		ft_is_valid_input(char *str);
void	ft_init_tab();
void	ft_display_tab();
void	ft_kill_tab(char **tab);
int		ft_is_valid_tab(char **tab);
void	ft_start_calc();
void	ft_data_nospace(char *data, char *data_valid);

extern char **g_tab;
extern int k;

int		main(int argc, char **argv)
{
	char	*data;
	char	*data_valid;

	data_valid = malloc(16 * sizeof(char));
	

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
			ft_data_nospace(data, data_valid);
			ft_putstr("Correct input format\n");

			 ft_init_tab();
			ft_putstr("Tab initialized\n");

			ft_start_calc();
				//ft_display_tab(tab);
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