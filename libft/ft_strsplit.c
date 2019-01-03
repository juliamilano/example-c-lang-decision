/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:34:38 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/27 13:34:40 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cntword(char const *s, char c)
{
	int i;
	int cnt;

	cnt = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static int		cntletter(char const *s, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		cnt++;
	}
	return (cnt);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	int			cntlet;
	char		**arr;
	char const	*str;

	if (!s ||
		!(arr = (char**)malloc(sizeof(*arr) * (cntword((char *)s, c) + 1))))
		return (NULL);
	i = -1;
	str = s;
	while (++i < cntword((char *)s, c))
	{
		j = 0;
		while (*str != '\0' && *str == c)
			str++;
		cntlet = cntletter(str, c);
		arr[i] = (char*)malloc(sizeof(char) * (cntlet + 1));
		while (*str != '\0' && *str != c)
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
