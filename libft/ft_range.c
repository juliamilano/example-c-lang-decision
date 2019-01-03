/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:50:54 by ytrubach          #+#    #+#             */
/*   Updated: 2018/11/01 16:51:17 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *x;
	int count;
	int i;

	if (min >= max)
		return (0);
	count = max - min;
	x = (int *)malloc(sizeof(int) * count);
	i = 0;
	while (i < count)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}
