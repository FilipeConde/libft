/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:15:28 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:01:07 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	marker;

	marker = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	*str_a = "646";
	char	*str_b = "65814,2654";
	char	c_res;

	c_res = ft_str_is_numeric(str_a) + '0';
	write(1, &c_res, 1);
	c_res = ft_str_is_numeric(str_b) + '0';
        write(1, &c_res, 1);
}*/
