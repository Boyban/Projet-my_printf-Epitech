/*
** aff_char.c for aff_char in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Nov 17 13:17:24 2016 Yohan Lequere
** Last update Thu Nov 17 16:24:13 2016 Yohan Lequere
*/

#include "my.h"

int	aff_char(int tmp, const char *str, int i)
{
  if (tmp == i)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (i);
}
