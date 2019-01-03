/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:39:51 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 16:39:55 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*tmp;
	int		i;

	tmp = NULL;
	i = 0;
	while (i <= (int)ft_strlen(str))
	{
		if (str[i] == ch)
			tmp = (char *)str + i;
		i++;
	}
	return (tmp);
}
