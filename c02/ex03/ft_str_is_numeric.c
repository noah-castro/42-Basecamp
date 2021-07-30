int	ft_check_num(char c);

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	while (str[index] != '\0')
	{
		result = ft_check_num(str[index]);
		if (result == 0)
		{
			break ;
		}
		index++;
	}
	return (result);
}

int	ft_check_num(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
