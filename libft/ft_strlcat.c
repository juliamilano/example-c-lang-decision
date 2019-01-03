/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:59:10 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 15:59:12 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t lendest;
	size_t lensrc;
	size_t i;

	i = 0;
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (lensrc + size);
	while (src[i] && i < (size - lendest - 1))
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return (lensrc + lendest);
}
