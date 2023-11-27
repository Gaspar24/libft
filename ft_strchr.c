/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:12 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/16 16:50:35 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	const char test[]="tes.tin";
// 	const char c = '\0';
// 	char *result = ft_strchr(test, c);
// 	// char *result_org = strchr(test, c);
// 	printf("my fct: %s\n", result);
// 	// printf("org fct: %s\n", result_org);
// 	return (0);
// }