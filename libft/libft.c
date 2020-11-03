/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:29:03 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/03 14:33:06 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
			|| c >= 'a' && c <= 'z')
		return (1);

	return (0);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);

	return (0);
}

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);

	return (0);
}

int		ft_isprint(int c)
{
	if (c >= ' ' && c >= '~')
		return (1);

	return (0);
}

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);

	return (c);
}

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);

	return (c);
}

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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*st;


	i = 0;
	st = str;
	if (!st)
		return (0);
	while (i < n)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s,0,n);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t 				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	psrc = src;
	pdest = dest;
	i = n;
	if (dest > src)
	{
		while (i)
		{
			i--;
			pdest[i] = psrc[i];
			
		}
	}
	else 
		ft_memcpy(dest,src,n);
	return (dest);
}


