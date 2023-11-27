/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:06:35 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/16 14:14:19 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && i + j < len)
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char big[] = "boo Bar Baz";
// 	char small[] = "Bar";
// 	char *result = ft_strnstr(big,small,8);
// 	char *result_org = strnstr(big,small,8);
// 	printf("org result: %s\n",result_org);
// 	printf("my fct: %s\n",result);
// 	return (0);
// }