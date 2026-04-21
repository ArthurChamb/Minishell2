/*
** shell.c for shell in /home/XXXXXX/Rendu/System_Unix/PSU_2015_minishell2
**
** Made by Arthur XXXXXX
** Login   <XXXXXX@epitech.net>
**
** Started on  Thu Apr 14 20:11:49 2016 Arthur XXXXXX
** Last update Thu Apr 14 23:27:39 2016 Arthur XXXXXX
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my.h"

int	shell(char **tab, char *path_env, char **env)
{
  char	**path;
  char	*param;
  int	c;

  c = 0;
  if ((path = path_editor(path_env)) == NULL)
    return (my_putstre("Malloc has failed\n"));
  while (access(param, F_OK | X_OK) != 0)
    {
      if (path[c] == NULL)
	return (my_putstre("Command was not found\n"));
      param = my_strncat(path[c], tab[0], my_strlen(path[c]), '/');
      c++;
    }
  if (executable(param, tab, env) == -1)
    return (-1);
  return (0);
}

int	builtin(char **tab, char **env)
{
  int	i;

  i = 0;
  if (my_strcmp(tab[0], "cd") == 0 || tab[0][0] == '\0')
    {
      chdir(tab[i + 1]);
      return (2);
    }
  if (my_strcmp(tab[0], "exit") == 0)
    exit(0);
  if (my_strcmp(tab[0], "env") == 0)
    {
      while (env[i])
	{
	  my_putstr(env[i]);
	  my_putchar('\n');
	  i++;
	}
    }
  return (0);
}

int	executable(char *param, char **tab, char **env)
{
  pid_t	pid;
  int	retour;
  int	status;

  retour = 0;
  if ((pid = fork()) == -1)
    return (my_putstre("Can't fork\n"));
  if (pid == 0)
    retour = execve(param, &tab[0], env);
  else
    wait(&status);
  if (retour != 0)
    return (my_putstre("Imposible to execute the command\n"));
  return (0);
}
