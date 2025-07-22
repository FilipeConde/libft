/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:14:56 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/22 19:35:51 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	else if (c >= 'A' && c <= 'Z')
		return (1024);
	else
		return (0);
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
