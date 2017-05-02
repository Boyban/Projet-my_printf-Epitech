/*
** my_put_hexa.c for my_put_hexa in /home/Yohan/Unix System Programmation/my_put_hexa
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Nov 17 09:28:08 2016 Yohan Lequere
** Last update Fri Nov 18 22:27:29 2016 Yohan Lequere
*/

#include <stdlib.h>
#include "my.h"

int	fonc_alloc(long int nb)
{
  int	i;

  i = 1;
  while (nb > 10)
    {
      nb = nb / 10;
      i = i + 1;
    }
  return (i);
}

int	condition(char *str, int i[], int c)
{
  while (str[i[0]] != 57)
    {
      str[i[0]] = str[i[0]] - 1;
      c = c + 1;
    }
  str[i[0]] = c;
}

int	inc(char *str, int i[], int nb, char c)
{
  str[i[0]] = (nb % 16) + 48;
  nb = nb / 16;
  if (str[i[0]] > 57)
    condition(str, i, c);
  i[0] = i[0] + 1;
  return (nb);
}

long int	my_put_hexa(long int nb, char x)
{
  int		i[1];
  int		c;
  char		*str;
  int		tmp;
  long int	compt;

  str = malloc(sizeof(fonc_alloc(nb) + 1));
  compt = fonc_alloc(nb) - 2;
  i[0] = 0;
  while (nb >= 16)
    {
      c = 64;
      if (x == 'x')
	c = 96;
      nb = inc(str, i, nb, c);
    }
  if (nb > 0)
    {
      my_put_nbr(nb);
      compt = compt + 1;
    }
  my_revstr(str);
  my_putstr(str);
  free(str);
  return (compt);
}
