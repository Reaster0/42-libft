/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:30 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/05 14:49:51 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
	char destination[40] = "ceci est un test";
	char *source = "hello world!";
	char dst[40] = "ceci est un test";
	char *src = "hello world!";

	printf("=%s\n",destination);
printf(":%s\n:%d\n:%s\n",source,st_strlcat(destination,source,29),destination);

	printf("\n\n=%s\n",dst);
printf(":%s\n:%d\n:%s\n",src,ft_strlcat(dst,src,29),dst);

}

