int	ft_isalpha(int a)
{
	if ((a > 96 && a < 123) || (a > 64 && a < 91))
		return (1);
	else
		return (0);
}
