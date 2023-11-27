/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:00:59 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/23 18:42:06 by msacaliu         ###   ########.fr       */
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
	if (s2 == NULL || s1 == NULL)
		return (SIG_ERR);
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
// 	char	source[] = "";
// 	// char *result = ft_memmove(dest, NULL , n);
// 	char *result_org = memmove(dest,NULL ,n);
// 	// printf("my fct :%s\n",result);
// 	printf("org fct : %s\n",result_org);
// 	return (0);
// }