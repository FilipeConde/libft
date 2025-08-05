/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:56:46 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/04 23:05:52 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	index;

	index = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
			s++;
		}
		else
		{
			index++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (index);
}

static void	*free_all(char **s, size_t j)
{
	
	while (j > 0)
	{
		free(s[j - 0]);
		j--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**splited_s;
	size_t			start_i;
	size_t			i;
	size_t			j;

	splited_s = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!splited_s)
		return (NULL);
	i = 0;
	j = 0;
	start_i = 0;
	
	// walks through s until end of string
	while (s[i] != '\0' && j < count_words(s, c))
	{
		// if different than delimiter
		if (s[i] != c)
		{
			// start of new word
			start_i = i;
			// until next delimiter counts word's chars
			while (s[i] != c && s[i] != '\0')
				i++;
			// write element
			splited_s[j] = ft_substr(s, start_i, i - start_i);
			// if fail, clean all slots and return NULL
			if (!splited_s[j])
			{
				free_all(splited_s, j);
				return (NULL);
			}
			// jumps to next slot
			j++;
		}
		// jumpt to next word start
		while (s[i] == c)
			i++;
	}
	
	splited_s[j] = NULL;
	return (splited_s);
}

// int	main(void)
// {
// 	char	s[] = "--teste--abc--123--";
// 	char	**result;

// 	result = ft_split(s, '-');
// 	// printf("RESULT: %s\n\n", result[2]);
// 	if (!result)
// 	{
// 		free(result);
// 		return (0);
// 	}
// 	while (*result)
// 	{
// 		printf("RESULT: %s\n\n", *result);
// 		result++;
// 	}
// 	return (0);
// }