/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:16:15 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/22 21:58:19 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
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
