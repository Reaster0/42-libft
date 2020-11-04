/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:30 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/04 18:53:59 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
	char	*text = argv[1];
	char		word = argv[2][0];
	unsigned char	*result = memchr(text,word,ft_strlen(text));
	unsigned char	*result2 = ft_memchr(text,word,ft_strlen(text));

	printf("la vraie fonction a trouvée :%c\n dans :%s\n ici :%s\n"
			,(int)word,text,result);
printf("ma fonction fonction a trouvée :%c\n dans :%s\n ici :%s\n"
			,(int)word,text,result2);

}

