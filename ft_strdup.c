/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:13:27 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/23 22:44:46 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *) malloc(ft_strlen(s) * sizeof(char));
	if (s[0] == '\0')
	{
		result[0] = '\0';
		return (result);
	}
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src = "\0";
	char	*new_str;
	new_str = ft_strdup(src);
	printf("%s\n", src);
	printf("%s\n\n", new_str);

	new_str = strdup(src);
	printf("%s\n", src);
	printf("%s\n", new_str);
}*/