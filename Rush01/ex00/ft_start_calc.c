void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
int     ft_is_valid_tab(int x, int y, int n);
void	ft_display_tab();
int     ft_is_match_input();

extern char **g_tab;
extern int count;
extern char *data_valid;

int		ft_start_calc() 
{
    int i;
    int x;
    int y;

    int is_solved;
    

    x = 0;
    is_solved = 0;
    
    while (x < 4)
    {
        y = 0;
        while(y < 4)
        {
            if (g_tab[x][y] == 0)
            {
                i = 1;
                while(i < 5)
                {
                    if(ft_is_valid_tab(x, y, i))
                    {
                        g_tab[x][y] = i;
                        ft_start_calc();
                        g_tab[x][y] = 0;
                    }
                    i++;
                }
                return (0);
            }
            y++;
        }
        x++;
    }

    count++;
    //ft_display_tab();
    //ft_putchar('\n');
    //ft_putnbr(count);

    is_solved = ft_is_match_input();
    
    if(is_solved)
        ft_display_tab();
    //ft_putnbr(is_solved);

    return (is_solved);
}