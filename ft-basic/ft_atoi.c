/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:55:14 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/05 19:33:47 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	size_t i;
	int result;
	int negative;

	negative = 0;
	i = 0;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || 
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' && nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
		i++;
	if (nptr[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	if (negative)
		result = -result;
	return (result);
}
