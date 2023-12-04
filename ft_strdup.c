/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:39:53 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/04 13:56:05 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = (char *) malloc((ft_strlen(s1)+1));
	if (!new_string)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// int main(void)
// {
// 	char string[] = "test12323423";
// 	char *result = ft_strdup(NULL);
// 	// char *result_org = strdup(NULL);
// 	printf("my fct: %s\n",result);
// 	// printf("org fct: %s\n",result_org);
// 	return(0);
// }