/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:14:59 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/16 16:52:35 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	total = count + size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, total);
	return (ptr);
}

// int	main(void)
// {
// 	return (0);
// }