/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:56:46 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/02 16:25:48 by fconde-p         ###   ########.fr       */
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

// static unsigned int	check_delimiter(char const *s, char c)
// {
// 	unsigned int	index;

// 	index = 0;
// 	while (*s != c && *s != '\0')
// 	{
// 		if (*s == c)
// 			return (index);
// 		index++;
// 		s++;
// 	}
// 	return (index);
// }

// static unsigned int	get_next_valid_index(char const *s, char c)
// {
// 	unsigned int	index;

// 	index = 0;
// 	while (*s != '\0')
// 	{
// 		if (*s == c)
// 			return (index);
// 		index++;
// 		s++;
// 	}
// 	return (index);
// }

char	**ft_split(char const *s, char c)
{
	char			**splited_s;
	unsigned int	start_i;
	int				i;
	int				j;
	char			*ptr_s;

	ptr_s = ft_strtrim(s, &c);
	splited_s = malloc((count_elements(ptr_s, c) + 1) * sizeof(char *));
	if (!splited_s)
		return (NULL);
	i = 0;
	j = 0;
	start_i = 0;

	while (ptr_s[i] != '\0')
	{
		if (ptr_s[i] == c)
		{
			splited_s[j] = ft_substr(ptr_s, start_i, i - start_i);
			if (!splited_s[j])
				printf("ERRO");
			while (ptr_s[i] == c)
				i++;
			start_i = i;
			j++;
		}
		else
			i++;
	}
	
	return (splited_s);
}

int	main(void)
{
	char	s[] = "   teste   abc 123  ";
	char	**result;

	result = ft_split(s, ' ');
	printf("RESULT: %s\n\n", result[2]);
	while (*result)
	{
		printf("RESULT: %s\n\n", *result);
		result++;
	}
}