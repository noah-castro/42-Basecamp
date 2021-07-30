int	ft_check_print(char c);

int	ft_str_is_printable(char *str)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	while (str[index] != '\0')
	{
		result = ft_check_print(str[index]);
		if (result == 0)
		{
			break ;
		}
		index++;
	}
	return (result);
}

int	ft_check_print(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}
