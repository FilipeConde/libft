/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:02:19 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/26 21:00:57 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	acc;
	// int	i;

	sign = 1;
	acc = 0;
	// i = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13) || *nptr == '+')
	{
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr == '-')
		{
			sign = -1;
		}
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

// int	ft_atoi(const char *nptr)
// {
// 	int	i_nptr;
// 	int	i;

// 	i = 0;
// 	i_nptr = 0;
// 	while (nptr[i] != '\0')
// 	{
// 		i_nptr = i_nptr * 10 + (nptr[i] - '0');
// 		i++;
// 	}
// 	return (i_nptr);
// }