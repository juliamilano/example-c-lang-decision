/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:46:59 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 15:47:00 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*x;
	int		i;

	i = ft_strlen((char*)str);
	x = (char *)malloc(sizeof(*x) * (i + 1));
	if (x == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		x[i] = str[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
