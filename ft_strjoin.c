/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:24:30 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/16 18:49:51 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*new_string;
	int		suf;

	i = 0;
	new_string = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_string)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	suf = i;
	i = 0;
	while (s2[i] != '\0')
	{
		new_string[suf] = s2[i];
		i++;
		suf++;
	}
	new_string[suf] = '\0';
	return (new_string);
}

// int	main(void)
// {
// 	char s1[] = "hello ";
// 	char s2[] = "world";
// 	char *result = ft_strjoin(s1,s2);
// 	printf("%s",result);
// 	return (0);
// }