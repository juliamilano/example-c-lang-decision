/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:38:48 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:38:50 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && n > 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (s1[i] == s2[i] || n == 0)
		return (1);
	return (0);
}
