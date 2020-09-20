extern char **g_tab;

int     ft_is_valid_tab(int x, int y, int n)
{
	int i;

	i = 0;

	while (i < 4)
	{
		if (g_tab[x][i] == n)
			return (0);
		if (g_tab[i][y] == n)
			return (0);
		i++;
	}

	return(1);
}