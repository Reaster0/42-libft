#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int i;
	int len;

	len = ft_strlen(str);
	i = ft_strlen(str);
	while (i > len)
	{
		if (c == str[i])
			return (&str[i]);
		i--;
	}
	return (0);
}