/*
** main.c for my_put_nbr in /home/Yohan/Day03
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Oct  5 22:50:59 2016 Yohan Lequere
** Last update Fri Nov 18 18:27:41 2016 Yohan Lequere
*/

#include "my.h"

int	count1_2(unsigned int nbr)
{
  unsigned int		count;

  count = 1;
  while (nbr > 9)
    {
      nbr = nbr / 10;
      count = count * 10;
    }
  return (count);
}

int			display_p2(unsigned int nb)
{
  unsigned int		count;
  unsigned long		results;
  int			i;

  i = 0;
  results = 0;
  count = count1_2(nb);
  while (nb >= 0)
    {
      if (count == 1)
	{
	  my_putchar(nb + 48);
	  i = i + 1;
	  return (i);
	}
      else
	{
	  results = nb / count;
	  nb = nb % count;
	  count = count / 10;
	  my_putchar(results + 48);
	  i = i + 1;
	}
    }
  return (i);
}

int    	my_put_nbr2(unsigned int nb)
{
  if (nb >= 0)
    {
      display_p2(nb);
    }
}
