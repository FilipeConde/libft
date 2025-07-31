/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:26:08 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/30 23:35:26 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	check_start(char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[0 + i] == set[0])
	{
		while (src[i] == set[j])
		{
			i++;
			j++;
		}
		j = 0;
	}
	return (i);
}

static size_t	check_end(char const *src, char const *set)
{
	size_t	src_count;
	size_t	set_count;

	src_count = ft_strlen(src) - 1;
	set_count = ft_strlen(set) - 1;
	while (src[src_count] == set[set_count])
	{
		while (src[src_count] == set[set_count])
		{
			src_count--;
			if (src_count == 0 || set_count == 0)
			{
				break;
			}
			set_count--;
		}		
		set_count = ft_strlen(set) - 1;
	}
	return (src_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	size_s1;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = check_start(s1, set);
	end = check_end(s1, set);
	size_s1 = end - start + 1;

	ptr = (char *)ft_calloc((size_s1 + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + start, size_s1 + 1);	
	return (ptr);
}


int	main(void)
{
	char	str[] = "   xxxtripouille";
	char	*res;

	res = ft_strtrim(str, " x");
	printf("RESULTADO: %s\n", res);
}