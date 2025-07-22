/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:14:56 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:00:41 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	marker;

	marker = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			marker = 0;
			i++;
		}
	}
	return (marker);
}
/*#include <unistd.h>

int	main(void)
{
	char	*str_a = "t.este";
	char	*str_b = "a";
//	int	res;
	char	c_res;

	c_res = ft_str_is_alpha(str_a) + '0';
	write(1, &c_res, 1);
	c_res = ft_str_is_alpha(str_b) + '0';
        write(1, &c_res, 1);
}*/
