/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:16:17 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/28 18:48:29 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > (ft_strlen(s) - 1))
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		ft_memset(substr, 0, 1);
		return (substr);
	}
	i = 0;
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

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Foi o melhor dos tempos, foi o pior dos tempos...";

	// CT: Extrai do início
	printf("CT01: %s\n", ft_substr(str, 0, 3));
	
	// CT: Extrai do meio
	printf("CT02: %s\n", ft_substr(str, 6, 17));
	
	// CT: Inicia fora dos limites da str base
	printf("CT03: %s\n", ft_substr(str, 100, 10));
	
	// CT: Extrai tamanho 0
	printf("CT04: %s\n", ft_substr(str, 4, 0));

	// CT: Extrai tamanho 0
	printf("CT05: %s\n", ft_substr(str, 0, 0));

	// CT: Extrai tamanho acima do existente na base
	printf("CT06: %s\n", ft_substr(str, 0, 70));

	// CT: 
	// printf("CT0x: %s\n", ft_substr(str, 0, 0));
}
	*/