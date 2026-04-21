/*
** env.c for env in /home/XXXXXX/Rendu/System_Unix/PSU_2015_minishell2
**
** Made by Arthur XXXXXX
** Login   <XXXXXX@epitech.net>
**
** Started on  Sat Apr  9 18:06:53 2016 Arthur XXXXXX
** Last update Thu Apr 14 19:40:47 2016 Arthur XXXXXX
*/

#include <stdlib.h>
#include <my.h>

char	*get_env(char **env)
{
  int	i;
  int	c;
  int	a;
  char  **tab;

  i = 0;
  c = 5;
  a = 0;
  while (env[i])
    {
      if (env[i][0] == 'P' && env[i][3] == 'H')
	{
	  tab = my_str_to_wordtab(env[i]);
	  while (tab[0][a])
	    {
	      tab[0][a] = tab[0][c];
	      a++;
	      c++;
	    }
	  return (tab[0]);
	}
      i++;
    }
  return (0);
}
