#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t 				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	psrc = src;
	pdest = dest;
	i = 0;
	if (!pdest && !psrc)
		return (0);
	while (i < n)
	{
		if (psrc[i] == (unsigned char)c)
		{
			pdest[i] = psrc[i];
			break;
		}
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}