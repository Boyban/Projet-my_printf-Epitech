/*
** my_putstr.c for my_putstr in /home/Yohan/Day04/test
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Oct  6 17:56:58 2016 Yohan Lequere
** Last update Tue Nov 15 18:56:56 2016 Yohan Lequere
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
