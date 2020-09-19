





i = 0;
while(i < 16)
{
    tab2d[i] = 48;
    i++;
}





i = 0;
while (1)
{
    while (tab2d[j])
    {
        if (tab2d[j] != 4)
        {
            
            
            
            o = 0;
            while (m < 16)
            {
                if(tab2d[m] == 4 + '0')
                {
                    tab2d[m+1] += 1;
                    tab2d[m] = 1 + '0';
                }
                m++;
            }
            
            tab2d[0] += 1;
            
            while(o < 16)
            {
                ft_putchar(tab2d[o] + '0');
                o++;
            }
            ft_putchar('\n');
            
            
            
        }
        else
        {
            break ;
        }
    }
    
    }












while( g_tab[15] != 4)
{
    g_tab[0] += 1;
    
    i = 0;
    while (i++ < 16)
    {
        if(g_tab[i] == 53)
        {
            g_tab[i] = 49;
            g_tab[i+1] += 1;
        }
    }
    
    //j = 0;
    /*
     while (j < 16)
     {
     //g_tab[0] += 1;
     ft_putchar(g_tab[j]);
     j++;
     }
     */
    
    //ft_putchar('\n');
