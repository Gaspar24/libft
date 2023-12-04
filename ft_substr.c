/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:08:31 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 15:39:31 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s + start))
		len = ft_strlen(s + start);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		string[i] = s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}

// int main(void)
// {
// 	char s[] = "hello1World";
// 	char *result = ft_substr(s,1,4);
// 	printf("my fct: %s\n",result);
// 	return (0);
// }
