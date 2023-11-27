/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:43:06 by msacaliu          #+#    #+#             */
/*   Updated: 2023/11/23 18:04:37 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count += 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*number_str;
	int			d_count;
	int			i;
	long long	temp;

	d_count = count_digits(n);
	temp = n;
	i = d_count;
	number_str = (char *)malloc((d_count +1) * sizeof(char));
	if (!number_str)
		return (NULL);
	if (temp == 0)
		number_str[0] = '0';
	while (temp != 0)
	{
		if (temp < 0)
		{
			number_str[0] = '-';
			temp = -temp;
		}
		number_str[(i--) - 1] = (temp % 10) + '0';
		temp = temp / 10;
	}
	number_str[d_count] = '\0';
	return (number_str);
}

// int main(void)
// {
// 	char *result = ft_itoa(-2147483648LL);
// 	printf("%s\n",result);
// 	return (0);
// }