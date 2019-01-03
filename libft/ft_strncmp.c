/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:50:18 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 16:50:20 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while (*st1 != '\0' && st2 != '\0' &&
			*st1 == *st2 && (int)n > 1)
	{
		st1++;
		st2++;
		n--;
	}
	return (*st1 - *st2);
}
