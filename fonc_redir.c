/*
** fonc_redir.c for fonc_redir in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Mon Nov 21 16:44:06 2016 Yohan Lequere
** Last update Mon Nov 21 16:49:33 2016 Yohan Lequere
*/

#include <stdarg.h>
#include "my.h"

int	cond(int count[], int j, void (**pointer)(), va_list ap);

int	fonc_redir(int count[], int c, void (**pointer)(), va_list ap)
{
  cond(count, c, pointer, ap);
  count[1] = count[1] + 1;
}
