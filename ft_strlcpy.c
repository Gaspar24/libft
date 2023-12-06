/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:00:36 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/05 12:15:48 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < size)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	if (i < size)
		*dest = 0;
	while (*src++)
		++i;
	return (i);
}

// int	main(void)
// {
// 	size_t dstsize = 3;
// 	char dst[dstsize];
// 	char src[] = "lorem ipsum";
// 	size_t result = ft_strlcpy(dst,src,dstsize);
// 	size_t result_org = strlcpy(dst,src,dstsize);
// 	printf("my fct :%zu\n",result);
// 	printf("org fct :%zu\n",result_org);
// 	return(0);
// }