void	ft_putstr(char *str);
void	ft_display_tab();
void	ft_putnbr(unsigned int nb);

extern char **g_tab;
extern char *data;
extern char *data_valid;

int     calc_tab_values(int a, int b, int c, int d)
{
    if(a == 4)
        return (1);
    else if(a == 3)
        return (2);
    else if(a == 2)
    {
        if(b == 4 || (c == 4 && d == 3))
            return (2);
        else
            return (3);
    }
    else if(b == 4)
        return (2);
    else if(b == 3)
        return (3);
    else if (c == 4)
        return (3);
    else
        return (4);
}

int     check_tab_value(int i)
{
    int result;
    int a;
    int b;
    int c;
    int d;

    result = 0;
    
    if(i < 4)
    {
        a = g_tab[i][0];
        b = g_tab[i][1];
        c = g_tab[i][2];
        d = g_tab[i][3];
    }
    else if(i < 8)
    {
        a = g_tab[i-4][3];
        b = g_tab[i-4][2];
        c = g_tab[i-4][1];
        d = g_tab[i-4][0];
    }
    else if (i < 12)
    {
        a = g_tab[0][i-8];
        b = g_tab[1][i-8];
        c = g_tab[2][i-8];
        d = g_tab[3][i-8];
    }
    else 
    {
        a = g_tab[3][i-12];
        b = g_tab[2][i-12];
        c = g_tab[1][i-12];
        d = g_tab[0][i-12];
    }

    result = calc_tab_values(a, b, c, d);

    return (result);
}

int     ft_is_match_input()
{
    int i;
    int n;

    i = 0;
    
    while(data_valid[i]-1)
    {
        n = data_valid[i] - 48;
        
            if(check_tab_value(i) != n)
                return (0);

        i++;
    }
    return (1);
}