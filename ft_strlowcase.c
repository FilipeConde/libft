/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:16:39 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:02:22 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*#include <unistd.h>

int	main(void)
{
	char	str_a[] = "sVr.~D";
	char	*res = ft_strlowcase(str_a);
	int	i;

	i = 0;
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
}*/
