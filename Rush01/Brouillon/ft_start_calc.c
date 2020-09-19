void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);

int		ft_start_calc() //char **tab
{
    unsigned int    number;
    int             nbr_temp;
    //char            nbr_temp_mod;
    char            base4tab[16];
    int             count;

    number = 1;
    while (number < 4294967295)
    {
        //ft_putnbr(number);
        //ft_putchar('\n');
        number++;
    }
    ft_putnbr(number);   

    number = 1;
    while (number < 4294967295)
    {
        count = 0;
        nbr_temp = number;
        //ft_putnbr(number);
        //ft_putchar('\n');
        while (nbr_temp > 0)
        {
            
            //nbr_temp_mod = nbr_temp % 4;
            nbr_temp /= 4;
            base4tab[count] = (nbr_temp % 4) + 1;
            //ft_putnbr(base4tab[count]);
            //ft_putchar(' ');
            count++;
        }
        count--;
        while (count < 16)
        {
            base4tab[count] = 1;
            //ft_putnbr(base4tab[count]);
            //ft_putchar(' ');
            count++;
        }
        //ft_putchar('\n');


        number++;
    }

    return(number);
}