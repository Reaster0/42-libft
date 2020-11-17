/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:54:34 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/17 19:04:17 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t		result;
	long int	nbr;

	nbr = n;
	result = 0;
	if (nbr < 0)
	{
		result++;
		nbr = -nbr;
	}
	if (!nbr)
		result++;
	while (nbr)
	{
		if (nbr / 10)
			result++;
		else if (nbr)
			result++;
		nbr /= 10;
	}
	return (result);
}

char			*ft_itoa(int n)
{
	char	*result;
	size_t	size;
	long	nbr;

	nbr = n;
	size = ft_size(n);
	if (!(result = malloc((size + 1) * sizeof(char))))
		return (0);
	result[size--] = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	if (!nbr)
		result[0] = '0';
	while (nbr)
	{
		if (nbr / 10)
			result[size--] = (nbr % 10) + '0';
		else if (nbr)
			result[size--] = nbr + '0';
		nbr /= 10;
	}
	return (result);
}
