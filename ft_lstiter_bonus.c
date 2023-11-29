/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:02:53 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/29 15:37:58 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	curr = lst;
	while (curr != NULL)
	{
		(f)(curr->content);
		curr = curr ->next;
	}
}
