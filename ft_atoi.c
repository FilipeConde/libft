/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:02:19 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/27 16:45:51 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gen_int(char *ptr, int acc)
{
	while (ft_isdigit(*ptr) > 0)
	{
		acc = acc * 10 + (*ptr - '0');
		ptr++;
	}
	return (acc);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	acc;

	sign = 1;
	acc = 0;
	while (*nptr >= 0 && *nptr <= 32)
		nptr++;
	if (ft_isalpha(*nptr))
		return (0);
	if (*nptr == '-' || *nptr == '+')
	{
		if (ft_isdigit(*(nptr + 1)) == 0)
			return (0);
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if ((sign == -1) && ft_isdigit(*nptr) == 0)
			return (0);
		if (ft_isdigit(*nptr) > 0)  // limmit
		{
			acc = gen_int((char *)nptr, acc);
			return (acc * sign);
		}
		nptr++;
	}
	return (acc * sign);
}
