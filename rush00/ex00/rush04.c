void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	collumn;

	collumn = 1;
	while (collumn <= y)
	{
		row = 1;
		while (row <= x)
		{
			if (row == 1 && collumn == 1)
				ft_putchar('A');
			else if ((row == x && collumn == y) && (y >= 2 && x >= 2))
				ft_putchar('A');
			else if ((row == 1 && collumn == y) || (row == x && collumn == 1))
				ft_putchar('C');
			else if (row != 1 && collumn != 1 && row != x && collumn != y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			row++;
		}	
		ft_putchar('\n');
		collumn++;
	}
}
