/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:02:19 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/27 16:33:23 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	acc;

	sign = 1;
	acc = 0;

	// ignore caracters
	while (*nptr >= 0 && *nptr <= 32)
		nptr++;
	if (ft_isalpha(*nptr))
		return (0);
	if (*nptr == '-' || *nptr == '+')
	{
		if (ft_isdigit(*(nptr + 1)) == 0)
			return  (0);
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if ((sign == -1) && ft_isdigit(*nptr) == 0)
			return (0);
		if (ft_isdigit(*nptr) > 0)
		{
			while (ft_isdigit(*nptr) > 0)
			{
				acc = acc * 10 + (*nptr - '0');
				nptr++;
			}
			return (acc * sign);
		}
		nptr++;
	}
	return (acc * sign);
}
