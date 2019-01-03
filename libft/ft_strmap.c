/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:31:16 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:31:18 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!fresh)
		return (NULL);
	while ((char)s[i] != '\0' && f != NULL)
	{
		fresh[i] = f((char)s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
