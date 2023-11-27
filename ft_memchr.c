/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:23:18 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/15 15:44:26 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)str)[i] != '\0')
	{
		if (((char *)str)[i] == c)
			return (&(((char *)str)[i]));
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