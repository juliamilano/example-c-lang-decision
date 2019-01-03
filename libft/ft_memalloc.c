/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:14:19 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:14:21 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tmp;

	tmp = (char*)malloc(size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
