/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:57:49 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/28 17:57:52 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *listnew;

	listnew = (t_list *)malloc(sizeof(t_list) * content_size);
	if (listnew == NULL)
		return (NULL);
	if (content == NULL)
	{
		listnew->content_size = 0;
		listnew->content = NULL;
	}
	else
	{
		if ((listnew->content = malloc(content_size)) == NULL)
			return (NULL);
		listnew->content = ft_memcpy(listnew->content, content, content_size);
		listnew->content_size = content_size;
	}
	listnew->next = NULL;
	return (listnew);
}
