/*
** my_printf.c for my_printf in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Nov  8 10:06:58 2016 Yohan Lequere
** Last update Tue Feb 21 16:21:40 2017 Yohan
*/

#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

int	fonc_redir(int count[], int c, void (**pointer)(), va_list ap);

int		conv_dec(int dec)
{
  int		oct;
  int		i;

  i = 1;
  oct = 0;
  while (dec != 0)
    {
      oct = oct + ((dec % 8) * i);
      dec = dec / 8;
      i = i * 10;
    }
  if (oct < 0)
    oct = oct * (-1);
  return (oct);
}

int		cond(int count[], int j, void (**pointer)(), va_list ap)
{
  if (j >= 0 && j <= 7)
    {
      pointer[j](va_arg(ap, int), count);
      count[1] = count[1] + 2;
    }
  else if (j == 8)
    {
      pointer[8](va_arg(ap, unsigned int), count);
      count[1] = count[1] + 2;
    }
  else if (j == 9 || j == 10)
    {
      pointer[j](va_arg(ap, char*), count);
      count[1] = count[1] + 2;
    }
  else if (j == 11)
    {
      pointer[j](j);
      count[1] = count[1] + 2;
    }
  else
    return (count[1]);
  return (count[1]);
}

int    	redir(int count[], va_list ap, void (**pointer)(), const char *str)
{
  int  	c;
  char 	*list2;

  c = 0;
  list2 = FLAG_STR;
  while (list2[c] != str[count[1] + 2])
    {
      c = c + 1;
    }
  if (c == 3)
    {
      my_put_nbr(0);
      pointer[3](va_arg(ap, int), count);
      count[1] = count[1] + 3;
    }
  else if (c == 5 || c == 6)
    {
      my_putstr("0x");
      pointer[c](va_arg(ap, int), count);
      count[1] = count[1] + 3;
    }
  else
    fonc_redir(count, c, pointer, ap);
  return (count[1]);
}

int	my_printfonc(va_list ap, void (**pointer)(), char *str, int count[])
{
  int  	i;
  int  	j;
  char 	*list;
  int  	tmp;

  list = FLAG_STR;
  i = 0;
  while (str[i] != '\0')
    {
      j = -1;
      tmp = i;
      count[1] = i;
      if (str[i] == '%')
	{
	  j = 0;
	  while (list[j] != str[i + 1])
	    j = j + 1;
	  if (j == 12)
	    i = redir(count, ap, pointer, str);
	  i = cond(count, j, pointer, ap);
	}
      count[0] = count[0] + 1;
      i = aff_char(tmp, str, i);
    }
}

int		my_printf(const char *str, ...)
{
  va_list	ap;
  void		(*pointer[13])();
  int		len;
  int		count[2];

  count[0] = 0;
  va_start(ap, str);
  pointer[0] = &print_c;
  pointer[1] = &print_d;
  pointer[2] = &print_d;
  pointer[3] = &print_o;
  pointer[4] = &print_u;
  pointer[5] = &print_x;
  pointer[6] = &print_X;
  pointer[7] = &print_p;
  pointer[8] = &print_b;
  pointer[9] = &print_s;
  pointer[10] = &print_S;
  pointer[11] = &print_modulo;
  pointer[12] = &print_hash;
  my_printfonc(ap, pointer, str, count);
  return (count[0]);
}
