/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:06:35 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/05 12:18:17 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char big[] = "boo Bar Baz";
// 	char small[] = "bar";
// 	char *result = ft_strnstr(big,small,8);
// 	char *result_org = strnstr(big,small,8);
// 	printf("org result: %s\n",result_org);
// 	printf("my fct: %s\n",result);
// 	return (0);
// }