/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:30 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/04 20:51:05 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
	char	*text = argv[1];
	char		*text2 = argv[2];
	int			len = atoi(argv[3]);
	int	result = memcmp(text,text2,(size_t)len);
	int result2 = ft_memcmp(text,text2,(size_t)len);

	printf("la vraie fonction a trouvée comme difference :%d\n",result);
	printf("ma fonction a trouvée comme difference:%d\n",result2);
}

