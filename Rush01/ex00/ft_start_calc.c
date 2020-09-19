void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
void	ft_display_tab(char **tab);
int     ft_is_valid_tab(int x, int y);

extern char **g_tab;
extern int k;

void     ft_start_calc()
{

    int i;
    int x;
    int y;

    i = 0;
    x = 0;
    y = 0;

    while (i < 80)
    {
        //ft_display_tab(g_tab);
        if(g_tab[x][y] >= 5)
        {
            g_tab[x][y] = 1;
        }
        else 
        {
            g_tab[x][y] += 1;
        }
        

        if(ft_is_valid_tab(x, y))
        {
            if(y < 4)
                y++; 
            else
            {
                x++;
                y = 0;
            }
                
            ft_display_tab(g_tab);
        }
        else
        {
            //g_tab[x][y] -= 1;

            if(g_tab[x][y] >= 5)
            {
                g_tab[x][y] =  1;

                if(y < 4)
                {
                    y++;
                }
                else
                {
                    y = 0;
                    x++;
                }
                    
            }
        }

        
        
        i++;
        ft_putstr("\nEssai numero : ");
        ft_putnbr(i);
        ft_putchar('\n');
        
    }
    
    

        
}