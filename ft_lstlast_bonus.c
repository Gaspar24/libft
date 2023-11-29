/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:33:06 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/29 15:38:00 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	while (curr != NULL)
	{
		if (curr->next == NULL)
			break ;
		curr = curr->next;
	}
	return (curr);
}
