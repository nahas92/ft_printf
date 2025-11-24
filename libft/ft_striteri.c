/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:36:58 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 16:10:40 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void  to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = ft_toupper(*c);
// }

// int main()
// {
// 	char str[] = "hello";
// 	 ft_striteri(str, to_upper);
// 	 printf("%s\n", str);
// }
