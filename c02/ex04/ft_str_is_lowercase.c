int	ft_check_lower(char c);

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	while (str[index] != '\0')
	{
		result = ft_check_lower(str[index]);
		if (result == 0)
		{
			break ;
		}
		index++;
	}
	return (result);
}

int	ft_check_lower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
