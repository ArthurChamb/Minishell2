/*
** main.c for main in /home/XXXXXX/Rendu/System_Unix/PSU_2015_minishell2
**
** Made by Arthur XXXXXX
** Login   <XXXXXX@epitech.net>
**
** Started on  Sat Apr  9 17:51:19 2016 Arthur XXXXXX
** Last update Thu Apr 14 23:25:44 2016 Arthur XXXXXX
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	main(int ac, char **av, char **env)
{
  char	*path_env;
  char	*str;
  char	**tab;
  int	i;

  if ((str = my_malloc(200)) == NULL)
    return (my_putstre("The Malloc has failed\n"));
  if (ac != 1)
    return (my_putstre("Error - Usage : /mysh\n"));
  if ((path_env = get_env(env)) == -1)
    return (my_putstre("Impossible to find the Path\n"));
  while (1)
    {
      my_printf("$> ");
      if (read(0, str, 120) == 0)
	return (my_putstre("Impossible to read the line\n"));
      if ((tab = my_str_to_wordtab(str)) == -1)
	return (my_putstre("Malloc has failed\n"));
      if ((i = builtin(tab, env)) == -1)
	return (my_putstre("The builtins encountered a problem\n"));
      if (i != 2)
	shell(tab, path_env, env);
    }
}
