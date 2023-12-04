/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:00:59 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 14:11:06 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*new_d;
	char			*new_s;
	size_t			i;

	new_d = (char *) s1;
	new_s = (char *) s2;
	i = 0;
	if (!s2 && !s1)
		return (NULL);
	while (i < n)
	{
		if (s1 < s2)
			new_d[i] = new_s[i];
		else
			new_d[n - i -1] = new_s[n - i -1];
		i++;
	}
	return (s1);
}

// int	main(void)
// {
// 	size_t	n = 4;
// 	char	dest[n];
// 	char	source[] = "test";
// 	char *result = ft_memmove(dest, NULL, n);
// 	// char *result_org = memmove(NULL,source ,n);
// 	printf("my fct :%s\n",result);
// 	// printf("org fct : %s\n",result_org);
// 	return (0);
// }