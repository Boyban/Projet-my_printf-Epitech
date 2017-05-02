/*
** my_printf3.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Nov 15 15:38:37 2016 Yohan Lequere
** Last update Mon Nov 21 17:11:03 2016 Yohan Lequere
*/

#include "my.h"

void	print_x(int i, int count[])
{
  int	val;

  val = my_put_hexa(i, 'x');
  count[0] = count[0] + val;
}

void	print_X(int i, int count[])
{
  int	val;

  val = my_put_hexa(i, 'X');
  count[0] = count[0] + val;
}

void	print_p(int i, int count[])
{
  my_putstr("0x7fff");
  my_put_hexa(i, 'x');
}

void	print_S(char *str, int count[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      while (str[i] < 32 || str[i] >= 127)
	{
	  my_putstr("\\");
	  if (str[i] < 10)
	    my_putstr("00");
	  else if (str[i] >= 10 && str[i] < 32)
	    my_putstr("0");
	  my_put_nbr(conv_dec(str[i]));
	  i = i + 1;
	}
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	print_b(unsigned int i, int count[])
{
  int	val;

  val = my_put_unsignedbin(i);
  count[0] = count[0] + val;
}
