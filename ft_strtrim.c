/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:26:08 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/30 18:39:57 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	check_start(char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	size_s1;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	size_s1 = ft_strlen(s1);
	start = check_start(s1, set);
	printf("%zu", start);
	ptr = (char *)malloc(size_s1 * sizeof(char));
	while (*ptr)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	
	return (ptr);
}


int	main(void)
{
	char	str[] = "1212teste12";
	char	*res;

	res = ft_strtrim(str, "12");
	printf("%s", res);
}