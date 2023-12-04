/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:14:08 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 13:10:57 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*aux;

	curr = *lst;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}
