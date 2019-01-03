/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:49:22 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/28 18:49:23 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*point;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew((f(lst))->content, (f(lst))->content_size);
	point = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew((f(lst))->content, (f(lst))->content_size);
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (point);
}
