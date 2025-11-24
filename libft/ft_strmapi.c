/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:10:06 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/05 15:49:04 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*newstr;
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// char to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	return ft_toupper(c);
// }

// int main()
// {
// 	char *s = "hello";
// 	char *result = ft_strmapi(s, to_upper);

// 	printf("%s\n", result);
// 	free (result);
// }
