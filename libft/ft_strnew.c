/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:16:24 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:16:26 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tmp;
	char *str;

	str = (char*)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	tmp = str;
	while (size)
	{
		*tmp++ = '\0';
		size--;
	}
	*tmp = '\0';
	return (str);
}
