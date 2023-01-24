/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoymaz <fsoymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:47:57 by fsoymaz           #+#    #+#             */
/*   Updated: 2022/12/22 18:11:25 by fsoymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	n_c;

	n_c = (char)c;
	while (*s)
	{
		if (*s == n_c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (n_c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
