/*
** my.h for my in /home/XXXXXX/rendu/Piscine_C_bistromathique/include
**
** Made by Arthur XXXXXX
** Login   <XXXXXX@epitech.net>
**
** Started on  Wed Oct 28 10:37:52 2015 Arthur XXXXXX
** Last update Thu Apr 14 21:29:59 2016 Arthur XXXXXX
*/

#ifndef MY_H_
# define MY_H_

# ifndef NULL
#  define NULL ((void *)0)
# endif

void		my_putchar(char c);
int		my_isneg(int nb);
int		my_put_nbr(int nb);
int		my_put_un(unsigned int nb);
int		my_put_nbr_base(int nb);
int		my_printf(char *str, ...);
int		my_swap(int *a, int *b);
int		my_putstr(char *str);
int		my_putstre(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int		my_is_prime(int nombre);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int n, char c);
void		*my_malloc(unsigned int value);
void		my_free(void *n);
int		my_str_to_wordtab(char *str);
char		*my_strchr(char *str, int cut);
char		*get_env(char **env);
int		shell(char **tab, char *path_env, char **env);
int		my_strcmp(char *, char *);

#endif /* !MY_H_ */
