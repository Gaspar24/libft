/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:50:17 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/15 16:04:05 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*new_s1;
	const unsigned char	*new_s2;
	size_t				i;

	new_s1 = s1;
	new_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (new_s1[i] < new_s2[i] || new_s1[i] > new_s2[i])
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "ff";
// 	char s2[] ="testing";
// 	int result = ft_memcmp(s1,s2,3);
// 	int result_org = memcmp(s1,s2,3);
// 	printf("my fct : %d\n",result);
// 	printf("org fct : %d\n",result_org);
// 	return(0);
// }