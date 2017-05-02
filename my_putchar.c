/*
** my_putchar.c for my_putchar.c in /home/Yohan/CPool_Day10/lib/my
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Mon Oct 17 17:36:42 2016 Yohan Lequere
** Last update Mon Nov  7 18:21:27 2016 Yohan Lequere
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
