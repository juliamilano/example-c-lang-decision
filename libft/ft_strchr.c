/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:00:17 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 16:00:19 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*tmp;
	int		i;

	tmp = (char *)str;
	i = 0;
	while (tmp[i] != '\0' && tmp[i] != ch)
		i++;
	if (tmp[i] == ch)
		return ((char *)tmp + i);
	return (NULL);
}
