/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:52:42 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 16:43:37 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     unsigned char data[] = {1, 2, 3, 4, 5};
//     unsigned char *p;

//     p = ft_memchr(data, 6, 5);

//     printf("%d\n", *p);
// }