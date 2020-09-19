int     ft_is_valid_tab(char **tab)
{
	int i;
    int x;
    int y;

    x = 4;
    y = 4;
	if (!tab[y][x])
		return (0);
        
	i = y;

	while (i--)
		if (tab[y][x] == tab[i][x])
			return (0);
	i = y;
	while (++i < 4)
		if (tab[y][x] == tab[i][x])
			return (0);
	i = x;
	while (i--)
		if (tab[y][x] == tab[y][i])
			return (0);
	i = x;
	while (++i < 4)
		if (tab[y][x] == tab[y][i])
			return (0);

	return (1);
}