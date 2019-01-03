/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:32:19 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 14:32:22 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	size_t	i;

	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	tsrc = (char *)src;
	tdst = (char *)dst;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
