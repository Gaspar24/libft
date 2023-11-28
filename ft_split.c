/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:17:49 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/28 19:31:04 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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

char	*create_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

// void free_arr(char *arr ,const char s, char c)
// {
//     int i;

//     i = 0;
//     if (arr == NULL)
//         return;
//     while (i < count_words(s ,c))
//     {
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
// }

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**arr;

	i = 0;
	j = 0;
	index = -1;
	arr = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (NULL);
	while (i <= (size_t)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (size_t)ft_strlen(s)) && index >= 0)
		{
			arr[j] = create_word(s, index, i);
			j++;
			index = -1;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}

// int main(void)
// {
//     char s[] ="MAR,APR,MAI,JUN,JUL";
//     char c = ',';
//     char **result = ft_split(s, c);
//     int i = 0;
//     while (result != 0)
//     {
//         printf("%s\n",result[i]);
//         i++;
//     }
//     return (0);
// }