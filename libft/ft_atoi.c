static int	ft_isspace(char c)
{
	if ((c == '\n') || (c == '\r') || (c == '\v')
		|| (c == '\t') || (c == ' ') || (c == '\f'))
		return (1);
	return (0);
}

static int	ft_issign(char c)
{
	if ((c == '-') || (c == '+'))
		return (1);
	return (0);
}

static int	ft_isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int			i;
	int			minus_flag;
	long long int	acc;

	i = 0;
	minus_flag = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
		if (str[i++] == '-')
			minus_flag = 1;
	acc = 0;
	while (ft_isdigit(str[i]))
		acc = acc * 10 + (str[i++] - '0');
	if (minus_flag == 1)
		acc *= -1;
	return ((int)acc);
}
