/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:32:22 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:32:24 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*fresh;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!fresh)
		return (NULL);
	while ((char)s[i] != '\0' && f != NULL)
	{
		fresh[i] = f(i, (char)s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
