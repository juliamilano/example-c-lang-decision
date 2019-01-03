/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:09:16 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 15:09:18 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;
	unsigned char	d;

	d = (unsigned char)c;
	tmp = (unsigned char *)s1;
	i = 0;
	while (n--)
	{
		if (tmp[i] == d)
			return ((unsigned char *)s1 + i);
		i++;
	}
	return (NULL);
}
