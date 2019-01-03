/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:00:48 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/28 17:49:56 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpsrc = (unsigned char	*)src;
	tmpdst = (unsigned char *)dst;
	i = 0;
	if (tmpsrc < tmpdst)
	{
		while ((int)n-- > 0)
			tmpdst[n] = tmpsrc[n];
	}
	else
	{
		while (i < n)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
