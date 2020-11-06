/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:30 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/06 14:02:52 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
	int n = atoi(argv[1]);
	int *a;
	int i;


a = (int *)ft_calloc(n,sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}


	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
	}
	free( a );
}
