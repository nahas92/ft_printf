/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:02:20 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/10 16:22:30 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

int	count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

void	free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	word_count;
	char	**newstr;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	newstr = malloc(sizeof(char *) * (word_count + 1));
	if (!newstr)
		return (NULL);
	while (j < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		newstr[j] = ft_substr(s, i, word_len(s + i, c));
		if (!newstr[j])
			return (free_all(newstr, j), NULL);
		i += word_len(s + i, c);
		j++;
	}
	newstr[j] = NULL;
	return (newstr);
}

// int main()
// {
// 	char **str = ft_split("  hello world abdu  ", ' ');
// 	printf("%s\n", str[2]);
// }
