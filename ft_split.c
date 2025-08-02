/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:56:46 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/01 21:32:05 by fconde-p         ###   ########.fr       */
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

static unsigned int	check_delimiter(char const *s, char c)
{
	unsigned int	index;

	index = 0;
	while (*s != c && *s != '\0')
	{
		if (*s == c)
			return (index);
		index++;
		s++;
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char			**splited_s;
	unsigned int	start_i;
	unsigned int	end_i;
	int				i;
	char			*ptr_s;

	ptr_s = ft_strtrim(s, &c);
	// printf("TESTE: %s\n\n", ptr_s);
	splited_s = malloc((count_elements(s, c) + 1) * sizeof(char *));
	if (!**splited_s)
		return (NULL);
	i = 0;
	start_i = 0;
	end_i = 0;

	while (ptr_s[i] != '\0')
	{
		if (ptr_s[i] == c)
		{
			// *splited_s = malloc((i - last_delim_i) * sizeof(char));
			*splited_s = ft_substr(ptr_s[start_i], 0, i - start_i);
			start_i = i;
		}
	}
	
	return (splited_s);
}

int	main(void)
{
	// char	*data[] = {"teste", "abc"};
	char	s[] = "   teste   abc 123  ";
	ft_split(s, ' ');
	// printf("%s\n", data[0]);
	// printf("%s\n", ft_split(s, ' ')[1]);
}