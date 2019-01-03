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

    
#include <stdio.h>
#include <stdlib.h>

//xxx {second(s)|minute(s)|hour(s)|day(s)|month(s)} ago.
char *itoai(unsigned int n)
{
  char *s;
  int j;
  int i;
  int f;

  j = ((int)n < 0) ? -(int)n : n;
  f = ((int)n < 0) ? -1 : 0;
  i = (f == -1) ? 2 : 1;
  while ((j /= 10) >= 1)
     i++;
  i++;
  s = (char *)malloc(sizeof(char) * i + 2); 
  j = ((int)n < 0) ? -n : n;
  s[i - 1] = 32;
  s[i--] = '\0';
  while (i-- + f)
    (s[i] = j % 10 + 48) && (j /= 10);
  (i == 0) ? s[i] = '-' : 0;
  return (s);
}

int len(char *s)
{
  int i;

  i = 0;
  while (s && s[i])
    i++;
    return i;
}


void copy(char *dest, int *i, char *s, int start, int len)
{
  int j = 0;

//printf("d -%s, s-%s, %d, %d, %d\n", dest, s, (*i), start, len);
   while (j <  len )
   {
     //printf("s[start++] %c\n",  s[start]); 
     dest[(*i)++] = s[start++];
     //printf("*dest[(*i)] %c\n",  dest[(*i) - 1]);
     j++;
   }
  //*dest[ii] = '\0';
  //printf("*dest %s\n", dest);

}

char *create(char *num, char t, int f)
 {
  char *s;
  int i;
  const char *text;

  i = -1;
  s = (char *)malloc(sizeof(char) * 17);
  while (num[++i] != '\0')
    s[i] = num[i];
  text = "secondsminuteshoursdaysmonthsyears ago";
    if (t == 's' && f == 1) //num[i - 2]
		copy(s, &i, text, 0, 6);
     else if (t == 's') 
     	copy(s, &i, text, 0, 7);
     else if (t == 'm' && f == 1) 
     	copy(s, &i, text, 7, 6);
     else if (t == 'm') 
     	copy(s, &i, text, 7, 7);
     else if (t == 'h' && *(num + i - 2) == '1') 
        copy(s, &i, text, 14, 4);
   	 else if (t == 'h') 
	     copy(s, &i, text, 14, 5);
    else if (t == 'd' && num[i - 2] == '1') 
  	      copy(s, &i, text, 19, 3);
  	 else if (t == 'd') 
  	      copy(s, &i, text, 19, 4);
  	  else if (t == 'x' && num[i - 2] == '1') 
   	      copy(s, &i, text, 23, 4);
     else if (t == 'x') 
         copy(s, &i, text, 23, 5);
    copy(s, &i, text, 34, 5);
	s[17] = '\0';
  //printf("s -------- %s\n", s);
return s;
 // (state == 1) ? (s = "second ago\0") : 0;
 }


char    *moment(unsigned int duration)
{
  char *snum;
  unsigned int n;
  unsigned int m = 86400 * 30;
  unsigned int y = m * 12;
  char t;
  char *kk;
	int f;

	(n = 0) && (f = 0);
  if ((int)duration >= 0 && duration < 60 && (t = 's'))
     (duration == 1) ? (n = duration) && (f = 1) : (n = duration);
  else if (duration >= 60 && duration < 3600 && (t = 'm'))
    (duration / 60 == 1) ? (n = duration / 60) && (f = 1) : (n = duration / 60);
  else if (duration >= 3600 && duration < 86400 && (t = 'h'))
    n = duration / 3600;
  else if (duration >= 86400 && duration < m && (t = 'd'))
    n = duration / 86400;
  else if (duration >= m && duration < y && (t = 'x'))
    n = duration / m;
  snum = itoai(n);
  kk = create(snum, t, f);
   return kk; 
}

int		main(void)//
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
// moment(0);   //  => 0 seconds ago.
// moment(1);  // => 1 second ago.
//  moment(30);  //  => 30 seconds ago.
//  moment(65);  //  => 1 minute ago.
//  moment(120); //   => 2 minutes ago.
//  moment(2400); //   => 40 minutes ago.
//  moment(3735); //   => 1 hour ago.
	return (0);
}