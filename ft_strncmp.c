/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:23:15 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/23 18:27:40 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		rez;

	i = 0;
	rez = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (rez);
}

// int	main(void)
// {
// 	char s1[] = "test\200";
// 	char s2[] = "test\0";
// 	int result = ft_strncmp(s1,s2,6);
// 	int result_org = strncmp(s1,s2,6);
// 	printf("my fct: %d\n",result);
// 	printf("org fct: %d\n",result_org);
// 	return (0);
// }