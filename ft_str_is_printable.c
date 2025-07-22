/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:16:15 by fconde-p          #+#    #+#             */
/*   Updated: 2025/03/27 11:01:51 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	marker;

	marker = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	char	*str_a = " ";
	char	*str_b = "²";
	char	c_res;

	c_res = ft_str_is_printable(str_a) + '0';
	write(1, &c_res, 1);
	c_res = ft_str_is_printable(str_b) + '0';
        write(1, &c_res, 1);
}*/
