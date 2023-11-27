/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:17:49 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/27 13:36:06 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_strings(char const *s, char c)
{
	long	counter;
	long	index;

	counter = 1;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			counter++;
		index++;
	}
	return (counter);
}

static long	count_chars(char const *s, char c, long index)
{
	long	counter;

	counter = 0;
	while (s[index] != c && s[index] != '\0')
	{
		counter++;
		index++;
	}
	return (counter);
}

static char	*generate_substr(char const *s, char c, long s_index)
{
	char	*substr;
	long	substr_index;

	substr = (char *)malloc((count_chars(s, c, s_index) + 1));
	if (substr != NULL)
	{
		substr_index = 0;
		while (s[s_index] != c && s[s_index] != '\0')
		{
			substr[substr_index] = s[s_index];
			s_index++;
			substr_index++;
		}
		substr[substr_index] = '\0';
	}
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	long	arr_index;
	long	s_index;

	if (s == NULL)
		return (NULL);
	arr = (char **)malloc((sizeof(char *)) * (count_strings(s, c) + 1));
	if (arr != NULL)
	{
		arr_index = 0;
		s_index = 0;
		while (s[s_index] != '\0')
		{
			if (s[s_index] != c)
			{
				arr[arr_index] = generate_substr(s, c, s_index);
				s_index = s_index + ft_strlen(arr[arr_index]) - 1;
				arr_index++;
			}
			s_index++;
		}
		arr[arr_index] = NULL;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	i;
// 	char string[] = "To be or not to be that is the question";
// 	char c = ' ';
// 	char **result = ft_split(string, c);
// 	i = 0;
// 	while(result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }
