#include "libft.h"

int		ft_strncmp(char *str1, char *str2, int size)
{
	int i;
	int result;

	i = 0;
	result = 0;
	size *= size;
	while (i < size)
	{
		if (i > ft_strlen(str1) || i > ft_strlen(str2))
			return (0);
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}