/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:44:14 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 16:44:17 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;

	if (needle == s1 || needle[0] == '\0')
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] != needle[j] && s1[i] != '\0')
		i++;
	while (s1[i + j] != '\0')
	{
		i = i - j;
		j = 0;
		while (s1[i] == needle[j] && s1[i] != '\0' && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)s1 + i - j);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
