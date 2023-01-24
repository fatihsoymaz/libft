/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoymaz <fsoymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:54:34 by fsoymaz           #+#    #+#             */
/*   Updated: 2022/12/25 11:33:11 by fsoymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len)
	len = ft_strlen(s);
	size = ft_strlen((char *)s);
	if (start > size)
		return (ft_strdup(""));
	if (size - start < len)
		ret = (char *)malloc((size - start + 1) * sizeof(char));
	else
		ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
