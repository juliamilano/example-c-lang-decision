/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:56:06 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 15:56:11 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = ft_strlen((char*)dest);
	j = 0;
	while (src[j] != '\0' && ((int)n > 0))
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	dest[i + j] = '\0';
	return (dest);
}
