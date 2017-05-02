/*
** my_put_unsignedbin.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Nov 15 19:14:16 2016 Yohan Lequere
** Last update Sat Feb 25 14:58:07 2017 Yohan
*/

#include <stdlib.h>
#include "my.h"

int	fonc_alloc(int nb);

int	my_put_unsignedbin(unsigned int nbr)
{
  unsigned int  count;
  unsigned int  tmp;
  int           tmp2;
  char          *arr;

  tmp2 = 0;
  arr = malloc(sizeof(fonc_alloc(nbr) * 4) + 1);
  while (nbr >= 2)
    {
      count = nbr % 2;
      nbr = nbr / 2;
      arr[tmp2] = count + 48;
      tmp = tmp - 1;
      ++tmp2;
    }
  count = nbr % 2;
  arr[tmp2] = count + 48;
  my_revstr(arr);
  my_putstr(arr);
  count = my_strlen(arr) - 1;
  free(arr);
  return (count);
}
