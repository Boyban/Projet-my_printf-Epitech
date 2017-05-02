/*
** my.h for my.h in /home/Yohan/Unix System Programmation/PSU_2016_my_printf
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Nov 17 10:09:14 2016 Yohan Lequere
** Last update Mon Nov 21 16:48:27 2016 Yohan Lequere
*/

#ifndef	MY_H_
#define MY_H_

void		print_d(int i, int count[]);
void		print_s(char *str, int count[]);
void		print_c(char c, int count[]);
void		print_o(int i, int count[]);
void		print_u(unsigned int i, int count[]);
void		print_x(int i, int count[]);
void		print_X(int i, int count[]);
void		print_p(int i, int count[]);
void		print_b(unsigned int i, int count[]);
void		print_S(char *str, int count[]);
void		print_modulo(int c);
void		print_hash(int i, int count[]);
int		my_putstr(char *str);
void		my_putchar(char c);
int		my_put_nbr(int nb);
int		my_putstr(char *str);
void		my_putchar(char c);
int		my_put_nbr2(unsigned int nb);
int		conv_dec(int dec);
int		my_strlen(char *str);
long int	my_put_hexa(long int nb, char x);
int		my_put_unsignedbin(unsigned int nbr);
char		*my_revstr(char *str);
int		aff_char(int tmp, const char *str, int i);

#endif /* !MY_H_ */
