/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:16:17 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/28 18:08:03 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		substr = NULL;
		return (substr);
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Foi o melhor dos tempos, foi o pior dos tempos...";
// 	printf("%s\n", ft_substr(str, 0, 3));
// 	printf("%s\n", ft_substr(str, 6, 17));
// 	printf("%s\n", ft_substr(str, 100, 50));
// 	// printf("%s\n", ft_substr(str, 4, 6));
// }