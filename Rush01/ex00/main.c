#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_error(void);
int		ft_is_valid_input();
void	ft_init_tab();
void	ft_display_tab();
void	ft_kill_tab(char **tab);
int		ft_is_valid_tab(char **tab);
int		ft_start_calc();
void	ft_data_nospace();

extern char **g_tab;
extern int count;
extern int result_found;
extern char *data;
extern char *data_valid;

int		main(int argc, char **argv)
{
	

	result_found = 0;
	

	if(argc != 2)
	{
		ft_putstr("No param");
		ft_display_error();
	}
	else
	{
		data = argv[1];
		
		if (ft_is_valid_input())
		{
			if(!(data_valid = malloc(16 * sizeof(char))))
				return (0);

			ft_data_nospace();
			ft_putstr("Correct input format\n");
			//ft_putstr(data_valid);
			ft_init_tab(g_tab);
			ft_putstr("Tab initialized\n");

			count = 0;
			result_found = ft_start_calc();

			if (result_found)
				ft_display_tab();
		}
		else
		{
			ft_putstr("Bad input");
			ft_display_error();
		}
			
	}
	return (0);
}