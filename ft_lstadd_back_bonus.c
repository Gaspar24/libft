/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:39:52 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/29 15:37:43 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = *lst;
	new->next = NULL;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
}
