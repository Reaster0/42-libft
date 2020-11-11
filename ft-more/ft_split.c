/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:31:58 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/11 20:00:58 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_neo(char **neo)
{
	size_t i;

	i = 0;
	while (neo[i])
		free(neo[i++]);
	free(neo);
	return (0);
}

size_t	ft_strllen(char const *s, size_t start, char c)
{
	size_t i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		i++;
		start++;
	}
	return (i);
}

size_t	ft_nbrword(char const *s, char c)
{
	size_t i;
	size_t result;

	i = 0;
	result = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			result++;
		while (s[i] != c && s[i])
			i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	words;

	words = ft_nbrword(s, c);
	i = 0;
	j = 0;
	if (!(result = malloc((words + 1) * sizeof(char *))))
		return (ft_free_neo(result));
	while (i < words)
	{
		k += j;
		while (s[k] == c)
			k++;
		j = ft_strllen(s, k, c);
		if (!(result[i] = malloc((j + 1) * sizeof(char))))
			return (ft_free_neo(result));
		result[i] = ft_substr(s, k, j);
		i++;
	}
	return (result);
}
