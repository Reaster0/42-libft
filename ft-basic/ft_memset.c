void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*pstr;


	i = 0;
	pstr = str;
	if (!pstr)
		return (0);
	while (i < n)
	{
		pstr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}