/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:17:49 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/30 14:28:36 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_arr(char **arr )
{
	int	i;

	i = 0;
	if (arr == NULL)
		return (NULL);
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

int	str_len_mod(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
		{
			trigger = 0;
		}
		str++;
	}
	return (i);
}

char	*create_word(const char *str, int start, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((str_len_mod(&str[start], c) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (str[start] != c && str[start] != '\0')
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;

	i = 0;
	j = 0;
	arr = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (free_arr(arr));
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if ((s[i] != c))
		{
			arr[j] = create_word(s, i, c);
			if (!arr[j])
				return (free_arr(arr));
			j++;
			i = i + str_len_mod(&s[i], c);
		}
	}
	arr[j] = NULL;
	return (arr);
}

// int main(void)
// {
//     char s[] ="MAR,APR,MAI,JUN,JUL";
//     char c = ',';
//     char **result = ft_split(s, c);
//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("%s\n",result[i]);
// 		free(result[i]);
//         i++;
//     }
// 	free(result);
//     return (0);
// }