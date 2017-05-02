/*
** my_printf2.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Nov 15 15:14:31 2016 Yohan Lequere
** Last update Fri Nov 18 22:11:22 2016 Yohan Lequere
*/

#include "my.h"

void	print_d(int i, int count[])
{
  int	val;

  val = my_put_nbr(i);
  count[0] = count[0] + val;
}

void	print_s(char *str, int count[])
{
  my_putstr(str);
  count[0] = count[0] + my_strlen(str) - 1;
}

void	print_c(char c, int count[])
{
  my_putchar(c);
}

void	print_o(int i, int count[])
{
  int	val;

  val = my_put_nbr(conv_dec(i));
  count[0] = count[0] + val;
}

void	print_u(unsigned int i, int count[])
{
  int	val;

  val = my_put_nbr2(i);
  count[0] = count[0] + val;
}
