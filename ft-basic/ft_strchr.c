#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (c == str[i])
			return (&str[i]);
		i++;
	}
	return (0);
}