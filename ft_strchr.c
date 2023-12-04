/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:12 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/02 13:46:30 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = c % 256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (NULL);
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