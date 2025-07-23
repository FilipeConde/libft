/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:30:31 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/22 22:02:13 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.c"
int	ft_isalpha(int c);

#include "ft_isdigit.c"
int	ft_isdigit(int c);

#include "ft_isprint.c"
int	ft_isprint(int c);

#include "ft_strcmp.c"
int	ft_strcmp(char *s1, char *s2);

#include "ft_strdup.c"
char	*ft_strdup(char *src);

#include "ft_strlcat.c"
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#include "ft_strlcpy.c"
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#include "ft_strlen.c"
int	ft_strlen(char *str);

#include "ft_strlowcase.c"
char	*ft_strlowcase(char *str);

#include "ft_strncmp.c"
int	ft_strncmp(char *s1, char *s2, unsigned int n);

#include "ft_strupcase.c"
char	*ft_strupcase(char *str);
