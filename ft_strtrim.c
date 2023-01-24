/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoymaz <fsoymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:51:53 by fsoymaz           #+#    #+#             */
/*   Updated: 2022/12/21 00:53:04 by fsoymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	int		k;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size - 1]))
		size--;
	if (i > size)
		return (ft_strdup(""));
	trimmed = (char *)malloc(sizeof(char) * (size - i + 1));
	if (!trimmed)
		return (NULL);
	k = 0;
	while (i < size)
		trimmed[k++] = s1[i++];
	trimmed[k] = '\0';
	return (trimmed);
}
