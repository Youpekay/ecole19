extern char **g_tab;

int     ft_is_valid_tab(int x, int y)
{
	if (!g_tab[x][y])
		return (0);

	int is_valid;

	if(g_tab[x][y] != 0)
		is_valid = 1;
	else
		is_valid = 0;
		

	if(y == 0)
	{
		if (g_tab[x][y] == g_tab[x][y+1] || g_tab[x][y] == g_tab[x][y+2] || g_tab[x][y] == g_tab[x][y+3])
			is_valid = 0;
	}
	else if(y == 1)
	{
		if (g_tab[x][y] == g_tab[x][y+1] || g_tab[x][y] == g_tab[x][y+2] || g_tab[x][y] == g_tab[x][y-1]) 
			is_valid = 0;
	}
	else if(y == 2)
	{
		if (g_tab[x][y] == g_tab[x][y+1] || g_tab[x][y] == g_tab[x][y-1] || g_tab[x][y] == g_tab[x][y-2])
			is_valid = 0;
	}
	else
	{
		if (g_tab[x][y] == g_tab[x][y-1] || g_tab[x][y] == g_tab[x][y-2] || g_tab[x][y] == g_tab[x][y-3])
			is_valid = 0;
	}




	if(x == 0)
	{
		if (g_tab[x][y] == g_tab[x+1][y] || g_tab[x][y] == g_tab[x+2][y] || g_tab[x][y] == g_tab[x+3][y])
			is_valid = 0;
	}
	else if (x == 1)
	{
		if (g_tab[x][y] == g_tab[x+1][y] || g_tab[x][y] == g_tab[x+2][y] || g_tab[x][y] == g_tab[x-1][y])
			is_valid = 0;
	}
	else if (x == 2)
	{
		if (g_tab[x][y] == g_tab[x+1][y] || g_tab[x][y] == g_tab[x-1][y] || g_tab[x][y] == g_tab[x-2][y])
			is_valid = 0;
	}
	else
	{
		if (g_tab[x][y] == g_tab[x-1][y] || g_tab[x][y] == g_tab[x-2][y] || g_tab[x][y] == g_tab[x-3][y])
			is_valid = 0;
	}
	

	return(is_valid);
}