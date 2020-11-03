/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:07:33 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/03 18:07:34 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
