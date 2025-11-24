/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:48:44 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 15:45:14 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//#include <stddef.h>
// #include <stdio.h>
// int main()
// {
//    char dst[11] = "hello";
//    strlcat(dst, " world", 20);
//    printf("%s\n", dst);
// }