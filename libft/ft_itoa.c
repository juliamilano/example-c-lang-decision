/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:55:49 by ytrubach          #+#    #+#             */
/*   Updated: 2018/10/24 17:55:51 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cntdig(int n)
{
	int		cnt;
	int		i;

	i = 0;
	cnt = n;
	while (cnt != 0)
	{
		cnt /= 10;
		i++;
	}
	return (i);
}

static char		*negative(int n, int cnt)
{
	char	*a;
	int		i;

	i = cnt;
	if (n < 0)
	{
		n *= -1;
		a = (char*)malloc(sizeof(char) * (cnt + 2));
		if (!a)
			return (NULL);
		while (i >= 0)
		{
			a[i--] = n % 10 + '0';
			n /= 10;
		}
		a[0] = '-';
		a[cnt + 1] = '\0';
		return (a);
	}
	return (NULL);
}

static char		*positive(int n, int cnt)
{
	char	*a;
	int		i;

	i = cnt - 1;
	if (n > 0)
	{
		a = (char*)malloc(sizeof(char) * (cnt + 1));
		if (!a)
			return (NULL);
		while (i >= 0)
		{
			a[i--] = n % 10 + '0';
			n /= 10;
		}
		a[cnt] = '\0';
		return (a);
	}
	return (NULL);
}

char			*ft_itoa(int n)
{
	char	*arr;
	int		i;
	int		cnt;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	i = cntdig(n) - 1;
	cnt = cntdig(n);
	if (n < 0)
		arr = negative(n, cnt);
	else if (n > 0)
		arr = positive(n, cnt);
	else
	{
		arr = (char*)malloc(sizeof(char) * (2));
		if (!arr)
			return (NULL);
		arr[0] = '0';
		arr[1] = '\0';
	}
	if (!arr)
		return (NULL);
	return (arr);
}
