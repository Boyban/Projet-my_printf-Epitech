/*
** my_strlen.c for my_strlen in /home/Yohan/Day04/test
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Oct  6 19:25:07 2016 Yohan Lequere
** Last update Thu Nov 17 16:22:12 2016 Yohan Lequere
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] !='\0')
    {
      i = i + 1;
    }
  return (i);
}
