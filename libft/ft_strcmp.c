/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:49:06 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 16:49:08 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *st1;
	unsigned char *st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (*st1 != '\0' && st2 != '\0' && *st1 == *st2)
	{
		st1++;
		st2++;
	}
	return (*st1 - *st2);
}
