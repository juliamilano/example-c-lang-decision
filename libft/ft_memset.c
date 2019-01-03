/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:41:19 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 13:41:22 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)dest;
	while (i < n)
		tmp[i++] = c;
	return (dest);
}
