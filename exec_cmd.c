/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 09:48:21 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/11 15:15:35 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static char		**default_path(void)
{
	char	**ret;

	ret = (char **)malloc(sizeof(char *) * 2);
	ret[0] = ft_strdup("/bin");
	ret[1] = 0;
	return (ret);
}

static char		**get_path(t_env *e)
{
	char	**ret;
	int		i;
	char	*value;

	i = 0;
	ret = NULL;
	value = NULL;
	if (ft_content_exist(e->env, "PATH"))
	{
		value = ft_get_content(e->env, "PATH");
		if (ft_strequ(value, ""))
			ret = default_path();
		else
			ret = ft_strsplit(value, ':');
	}
	else
		ret = default_path();
	return (ret);
}

static void		execution_command(t_env *e)
{
	int		i;
	char	path_bin[2024];

	i = 0;
	e->path = get_path(e);
	while (e->path[i])
	{
		ft_strcpy(path_bin, e->path[i]);
		ft_strcat(path_bin, "/");
		ft_strcat(path_bin, e->cmd[0]);
		execve(path_bin, e->cmd, e->env);
		i++;
	}
	execve(e->cmd[0], e->cmd, e->env);
	if (!ft_strncmp(e->cmd[0], "\0", 1))
		ft_exit(0, e);
	else
	{
		ft_error(1, e->cmd[0]);
		ft_exit(0, e);
	}
}

void			exec_cmd(t_env *e)
{
	pid_t	father;
	int		status;

	if (check_builtins(e))
		return ;
	father = fork();
	if (father == -1)
		ft_exit(0, e);
	if (father == 0)
		execution_command(e);
	else
		waitpid(father, &status, WUNTRACED | WCONTINUED);
}
