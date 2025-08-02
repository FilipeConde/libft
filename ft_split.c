/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:56:46 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/02 18:54:33 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	count_elements(char const *s, char c)
{
	int	index;

	index = 1;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			index++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char			**splited_s;
	unsigned int	start_i;
	size_t			i;
	int				j;
	char			*ptr_s;

	ptr_s = ft_strtrim(s, &c);
	splited_s = malloc((count_elements(ptr_s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	start_i = 0;
	if (!splited_s)
	{
		free(splited_s);
		return (NULL);
	}
	
	while (i < ft_strlen(ptr_s))
	{
		if (ptr_s[i] == c)
		{
			splited_s[j] = ft_substr(ptr_s, start_i, i - start_i);
			if (!splited_s[j])
			{
				while (j >= 0)
				{
					free(splited_s[j]);
					j--;
				}
				return (NULL);
			}
			while (ptr_s[i] == c)
				i++;
			start_i = i;
			j++;
		}
		i++;
		if (ptr_s[i] == '\0')
		{
			splited_s[j] = ft_substr(ptr_s, start_i, i - start_i);
			if (!splited_s[j])
			{
				while (j >= 0)
				{
					free(splited_s[j]);
					j--;
				}
				return (NULL);
			}
		}
	}
	
	return (splited_s);
}

// int	main(void)
// {
// 	char	s[] = "-----teste--abc--123---";
// 	char	**result;

// 	result = ft_split(s, '-');
// 	// printf("RESULT: %s\n\n", result[2]);
// 	while (*result)
// 	{
// 		printf("RESULT: %s\n\n", *result);
// 		result++;
// 	}
// }