/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:56:07 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/06 14:06:53 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_calloc(size_t nmemb, size_t size)
{
	void *result;

	if ((result = malloc(nmemb * size)))
		ft_bzero(result, nmemb * size);
	return (result);
}
