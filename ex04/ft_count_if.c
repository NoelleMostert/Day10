int	ft_count_if(char **tab, int(*f)(char*))
{
	int x;
	int counter;

	x = 0;
	y = 0;
	while(tab[x] != 0)
	{
		if (f(tab[x]) == 1)
			counter++;
		x++;
	}
	return (counter);
}

