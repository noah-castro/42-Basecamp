int	ft_check_alpha(char c);

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	while (str[index] != '\0')
	{	
		result = ft_check_alpha(str[index]);
		if (result == 0)
		{
			break ;
		}
		index++;
	}
	return (result);
}

int	ft_check_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
