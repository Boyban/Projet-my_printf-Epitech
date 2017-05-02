/*
** my_revstr.c for my_revstr in /home/Yohan/Day06
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Mon Oct 10 12:20:15 2016 Yohan Lequere
** Last update Wed Nov 16 13:30:00 2016 Yohan Lequere
*/

int	my_strlen(char *str);

char	*my_revstr(char *str)
{
  char	j;
  int	i;
  int	c;

  c = 0;
  i = my_strlen(str) - 1;
  while (i > c)
    {
      j = str[i];
      str[i] = str[c];
      str[c] = j;
      i = i - 1;
      c = c + 1;
    }
  return (str);
}
