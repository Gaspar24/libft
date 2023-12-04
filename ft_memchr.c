/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:23:18 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 12:32:18 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		if (st[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char test[]="tes.tin";
// 	const char c = '.';
// 	char *result = ft_memchr(test, c, 5);
// 	char *result_org = memchr(test, c, 5);
// 	printf("my fct: %s\n", result);
// 	printf("org fct: %s\n", result_org);
// 	return (0);
// }