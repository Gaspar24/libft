/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:08:31 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 14:33:19 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_string;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	sub_string = (char *) malloc((len + 1) * sizeof(char));
	if (!sub_string)
		return (NULL);
	while (start < s_len && i < len && s[start] != '\0')
	{
		sub_string[i] = s[start];
		start++;
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}

// int main(void)
// {
// 	char s[] = "hello1World";
// 	char *result = ft_substr(s,1,4);
// 	printf("my fct: %s\n",result);
// 	return (0);
// }
