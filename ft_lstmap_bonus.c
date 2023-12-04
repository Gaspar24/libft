/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:43:40 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 13:13:22 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*curr;
	t_list	*new;

	curr = lst;
	new = NULL;
	while (curr != NULL)
	{
		aux = ft_lstnew_bonus(f(curr->content));
		if (!aux)
		{
			ft_lstclear_bonus(&new, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new, aux);
		curr = curr->next;
	}
	return (new);
}
