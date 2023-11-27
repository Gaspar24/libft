/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:53:56 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/14 16:30:21 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char test[]="testing.123";
// 	const char c = '8';
// 	char *result = ft_strrchr(test, c);
// 	char *result_org = strrchr(test, c);
// 	printf("my fct: %s\n", result);
// 	printf("org fct: %s\n", result_org);
// 	return (0);
// }