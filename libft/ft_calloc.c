/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:15:12 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/07 21:40:25 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	sum;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	sum = count * size;
	p = malloc(sum);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}

// int main()
// {
// 	char *arr;
// 	arr = ft_calloc(2, sizeof(char));
// 	printf("%d %d\n", arr[0], arr[1]);

// 	char *org;
// 	org = calloc(2, sizeof(char));
// 	printf("%d %d\n", arr[0], arr[1]);
// }
