/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:54:49 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 15:54:51 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	int	i;
	int	j;

	i = ft_strlen((char*)destptr);
	j = 0;
	while (srcptr[j] != '\0')
	{
		destptr[i + j] = srcptr[j];
		j++;
	}
	destptr[i + j] = '\0';
	return (destptr);
}
