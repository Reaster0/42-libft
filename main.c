/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:30 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/05 18:33:54 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
	char *test1  = argv[1];
	char *test2 = argv[2];
	int len = atoi(argv[3]);

	printf("\ntest1 :%s\ntest2 :%s\nlen :%d\n",test1,test2,len);
	printf("\nla vraie fonction a trouvee :%s\n",st_strnstr(test1,test2,len));
	printf("\nma fonction a touvee :%s\n",ft_strnstr(test1,test2,len));

}

