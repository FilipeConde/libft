/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:12:31 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/28 20:34:32 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_size;
	size_t	s2_size;

	s1_size = 0;
	s2_size = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if ((s1_size == 0 && s2_size == 0))
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ft_memset(ptr, 0, 1);
		return (ptr);
	}
	ptr = malloc((s1_size + s2_size + 1) * sizeof(char));
	if(!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, s1_size);
	ft_memcpy(ptr + s1_size, s2, s2_size);
	ptr[s1_size + s2_size + 1] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "teste123";
// 	char s2[] = "teste123";

// 	printf("%s", ft_strjoin(s1, s2));
// }
