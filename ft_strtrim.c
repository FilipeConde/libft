/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:26:08 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/29 18:56:14 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_start(char const *src, char const *set)
{
	// size_t	index;
	size_t	i;
	size_t	j;

	i = 0;
	while (src[0 + i] == set[0])
	// if (src[0 + i] == set[0])
	{
		while (src[i] == set[j])
		i++;
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	size_s1;
	size_t	start;
	size_t	end;

	size_s1 = ft_strlen(*s1);
	check_start(s1, set);
}
