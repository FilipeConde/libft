/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:16:26 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:02:03 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
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
	char	str_a[] = "svr.~dg";
	char	*res = ft_strupcase(str_a);
	int	i;

	i = 0;
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
}*/
