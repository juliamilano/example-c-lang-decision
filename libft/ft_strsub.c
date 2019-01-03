/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:39:57 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:39:59 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*fresh;
	unsigned int	lens;
	unsigned int	j;

	if (!s)
		return (NULL);
	i = 0;
	lens = ft_strlen((char*)s);
	fresh = (char*)malloc(sizeof(char) * (len + 1));
	if (!fresh || start > lens || start + len > lens)
		return (NULL);
	while (s[i] != '\0' && i != start)
		i++;
	j = 0;
	while (j < len)
	{
		fresh[j] = s[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
