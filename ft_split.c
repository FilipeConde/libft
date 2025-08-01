/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:56:46 by fconde-p          #+#    #+#             */
/*   Updated: 2025/08/01 19:06:43 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static unsigned int	check_delimiter(char const *s, char c)
{
	unsigned int	index;

	index = 0;
	while (*s != c && *s != '\0')
	{
		if (*s == c)
			return (index);
		index++;
		s++;
	}
	return (index);
}

void	ft_split(char const *s, char c)
{
	// printf("%d\n", check_delimiter(s, c));

	// char	*ptr;
	char	*temp1;
	char	*temp2;
	// char	**splited_s;
	unsigned int	last_delim_index;
	unsigned int	new_delim_index;

	last_delim_index = 0;
	new_delim_index = 0;
	while (*(s + (int)last_delim_index))
	{
		new_delim_index = check_delimiter(s + (int)last_delim_index, c);
		printf("%d\n", last_delim_index);
		printf("%d\n", new_delim_index);
		//copia do últmo delim até o atual para dentro do ponteiro
		s++;
	}
	

}

int	main(void)
{
	// char	*data[] = {"teste", "abc"};
	char	s[] = "teste abc 123";
	ft_split(s, ' ');
	// printf("%s\n", data[0]);
	// printf("%s\n", ft_split(s, ' ')[1]);
}