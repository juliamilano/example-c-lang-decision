/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:32:58 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 14:33:04 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpsrc = (unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpsrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
