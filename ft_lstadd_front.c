/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:37:15 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/15 19:22:45 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!(*alst))
		return ;
	temp = *alst;
	*alst = new;
	new->next = temp;
}
