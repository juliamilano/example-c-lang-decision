/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:41:23 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:41:25 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		alllens;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (*s1 == '\0' && *s2 == '\0')
		return (ft_strdup(""));
	alllens = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(fresh = (char*)malloc(sizeof(char) * (alllens + 1))))
		return (NULL);
	while (s1[i] != '\0' && i < alllens)
	{
		fresh[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < alllens)
		fresh[i++] = s2[j++];
	fresh[i] = '\0';
	return (fresh);
}
