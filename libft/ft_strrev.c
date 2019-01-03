/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:59:09 by ytrubach          #+#    #+#             */
/*   Updated: 2018/11/01 16:59:12 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		count;
	int		begin;
	char	tmp[1000];

	count = 0;
	begin = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		tmp[begin++] = str[count--];
	}
	str = tmp;
	return (str);
}
