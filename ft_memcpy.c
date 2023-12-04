/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:17:38 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 13:49:39 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*new_d;
	char			*new_s;

	new_d = (char *) dst;
	new_s = (char *) src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		new_d[i] = new_s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	size_t	n = 4;
// 	char	dest[n];
// 	char	source[] = "testing";
// 	char *result = ft_memcpy(dest, source , n);
// 	char *result_org = memcpy(dest,source ,n);
// 	printf("my fct :%s\n",result);
// 	printf("org fct :%s\n",result_org);
// 	return (0);
// }