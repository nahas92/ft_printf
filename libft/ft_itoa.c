/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:16:19 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 16:57:30 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = n;
	len = get_len(num);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     int i = -13333;
//     char *s = ft_itoa(i);
//     printf("%s\n", s);
//     free(s);
// }