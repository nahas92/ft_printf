/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:13:21 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/08 14:42:10 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (end > 0)
		end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	trimmed = ft_substr(s1, start, len);
	return (trimmed);
}

// #include <stdio.h>
// int main()
// {
//     char *trimmed;

//     trimmed = ft_strtrim("----hello, world----", "-");
//     printf("%s\n", trimmed);
// }
