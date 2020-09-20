void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_tab(char **tab);
int     ft_is_valid_tab(int x, int y);
int		ft_is_filled_tab();
void	ft_reset_tab();


extern char **g_tab;
int x;
int y;
int count_retry;


void    ft_backtrack()
{
    count_retry = 0;
    g_tab[x][y] = 0;
    if(y > 0)
    {
        y--;
    }
    else
    {
        y = 4;
        x--;
    }   
    g_tab[x][y] += 1;

}


void     ft_start_calc()
{
    
    int i;


    count_retry = 0;
    i = 0;
    x = 0;
    y = 0;

    g_tab[0][0] = 3;


    while (i < 35)//!ft_is_filled_tab())
    {
        
        if(ft_is_filled_tab() || count_retry > 4)
        {
            count_retry = 0;
            ft_backtrack();
            // !!!! On check si c'est ok !!!!
            // ft_reset_tab();
            
            
        }
        

        //ft_display_tab(g_tab);
        if(g_tab[x][y] >= 4)
        {
            g_tab[x][y] = 1;
        }
        else 
        {
            g_tab[x][y] += 1;
        }
        

        if(ft_is_valid_tab(x, y)) // && g_tab[x][y] < 5)
        {
            count_retry = 0;

            if(y < 4)
                y++; 
            else
            {
                x++;
                y = 0;
            }
                
            ft_display_tab(g_tab);
            ft_putchar('\n');
        }
        else
        {
            count_retry++;

            
            
        }

        
        i++;
        ft_putstr("\nEssai numero : ");
        ft_putnbr(i);
        ft_putchar('\n');
        


        
    }
    
    

        
}