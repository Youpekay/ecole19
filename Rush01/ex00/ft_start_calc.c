void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);


int     ft_start_calc(char **tab, char *data)
{
    int i;
    int j;

    char data_valid[16];
	int k;
	int l;

	k = 0;
	l = 0;
	while (data[k] != '\0')
	{
		if (k % 2 == 0 && l < 16)
        {
            data_valid[l] = data[k];
            l++;
        }
			
		k++;
	}


    i = 0;
    while (data_valid[i] != '\0')
    {
        if (data_valid[i] == '0' + 4)
        {
            //ft_putstr("test");
            j = 0;
            while (i < 4 && j < 4)
            {
                tab[j][i/4] = j + 1;
                j++;
            }

            j = 0;
            while (i >= 4 && i < 8 && j < 4)
            {
                tab[j][i/4] = 5 - (j + 1);
                j++;
            }

            j = 0;
            while (i >= 8 && i < 12 && j < 4)
            {
                
                tab[i/4][j] = j + 1;
                j++;
            }

            j = 0;
            while (i >= 12 && i < 16 && j < 4)
            {
                tab[i/4][j] = 5 - (j + 1);
                j++;
            }
        }
        i++;
    }
    //if ()
    //tab[1][3] = 3;
    //ft_putnbr(tab[2][2]);

    return(1);
}