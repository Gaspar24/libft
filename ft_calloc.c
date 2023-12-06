/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:14:59 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/05 12:04:38 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, 0, total);
	return (ptr);
}
