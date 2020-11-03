/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:06:42 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/03 18:51:46 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
