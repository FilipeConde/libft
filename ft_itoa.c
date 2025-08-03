/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:17:02 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/03 14:27:36 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_numlen(n);
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		*result = '0';
	else if (n < 0)
	{
		*result = '-';
		n *= -1;
	}
	result[len] = '\0';
	while (len > 0 && n != 0)
	{
		len--;
		result[len] = (n % 10) + '0';
		n /= 10;
	}

	return (result);
}
// #include <stdio.h>

// int main(void)
// {
// 	int num = -2147483648;
// 	char *str1 = ft_itoa(num);
// 	printf("%s\n", str1);
// 	free(str1);
// 	return (0);
// }