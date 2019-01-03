/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:42:56 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:42:58 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*fresh;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen((char const*)s);
	while (check(s[i]) && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	len = j;
	while (check(s[len - 1]) && (len - 1) != i)
		len--;
	fresh = (char*)malloc(j - i - (j - len) + 1);
	if (!fresh)
		return (NULL);
	k = 0;
	while (s[i] != '\0' && i < len)
		fresh[k++] = s[i++];
	fresh[k] = '\0';
	return (fresh);
}
