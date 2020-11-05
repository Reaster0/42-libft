/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:15:17 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/05 14:52:16 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t c;
	size_t len_dst;
	size_t len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	c = 0;
	i = ft_strlen(dst);
	if (size < len_dst + 1)
		return (size + len_src);
	if (size > len_dst + 1)
	{
		while (i < size - 1)
		{
			dst[i] = src[c];
			i++;
			c++;
		}
		dst[i] = 0;
	}
	return (len_dst + len_src);
}
