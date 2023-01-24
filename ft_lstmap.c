/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoymaz <fsoymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:12:13 by fsoymaz           #+#    #+#             */
/*   Updated: 2022/12/26 18:27:57 by fsoymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new)
			ft_lstadd_back(&result, new);
		else
			ft_lstclear(&new, del);
		lst = lst->next;
	}
	return (result);
}
