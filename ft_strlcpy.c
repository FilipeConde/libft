/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:17:02 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:02:51 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while ((unsigned int)i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((unsigned int)i);
}

/*#include <unistd.h>

int	main(void)
{
	char	src[] = "Fé!";
	unsigned int	size = 13;
	int	i = 0;
	char	dest[13];

	ft_strlcpy(dest, src, size);

	while (dest[i] != '\0')
	{
		write(1, &dest[i],1);
		i++;
	}
	return (0);
}*/
