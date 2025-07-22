/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:47:36 by fconde-p          #+#    #+#             */
/*   Updated: 2025/04/02 10:47:39 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0'))
		&& (unsigned int)i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	size;

	size = 4;
	printf("%d", strncmp(argv[1], argv[2], 4));
	printf("%d", ft_strncmp(argv[1], argv[2], 4));
	printf("%d", argc);
	return (0);
}*/
