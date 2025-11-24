/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 11:43:53 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/08 15:14:40 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	ft_strlcat(new, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (new);
}

// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "world";

// 	printf("new = %s\n", ft_strjoin(s1, s2));
// }