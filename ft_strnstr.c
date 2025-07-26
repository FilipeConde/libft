/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:15:56 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/26 16:05:32 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	if (ft_strlen(little) > ft_strlen(big) || len == 0)
		return (NULL);
	while (big[i])
	{
		while (*little)
		{
			if (ft_strncmp(big, little, len) == 0)
				return ((char *)&big[i]);
			little++;
		}
		i++;
	}
	return (NULL);
}