/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:47:57 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 15:31:25 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s1, len + 1);
	return (copy);
}

// #include <stdio.h>

// // int	main(void)
// // {
// // 	char *copy;
// // 	copy = ft_strdup("hello");

// // 	if (copy == NULL)
// // 		return (1);

// // 	printf("%s\n", copy);

// //     free(copy);
// // }