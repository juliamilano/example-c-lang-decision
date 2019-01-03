/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 14:31:30 by ytrubach          #+#    #+#             */
/*   Updated: 2018/12/22 14:31:40 by ytrubach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

int		main(void)
{
  printf("%s\n", moment(0));
  printf("%s\n", moment(1));
  printf("%s\n", moment(31));
  printf("%s\n", moment(65));
  printf("%s\n", moment(120));
  printf("%s\n", moment(2400));
  printf("%s\n", moment(3735));
  printf("%s\n", moment(52400));
  printf("%s\n", moment(90000));
  return (0);
}