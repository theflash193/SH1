/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 09:48:21 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/05 15:39:45 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

// static void		clean_leaks(t_env *e)
// {
// 	ft_free_tab(cmd);
// 	ft_free_tab(path);
// }

static char		**get_path(char **env)
{
	char	**ret;
	int		i;

	i = 0;
	ret = NULL;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
		{
			if (!(ret = ft_strsplit(env[i] + 5, ':')))
				return (NULL);
			break ;
		}
		i++;
	}
	return (ret);
}

static void		execution_command(t_env *e)
{
	int		i;
	char	path_bin[258];

	i = 0;
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
		ft_exit(0);
	else
	{
		ft_error(1, e->cmd[0]);
		ft_exit(0);
	}
}

void			exec_cmd(t_env *e)
{
	if (check_builtins(e))
		return ;
	e->path = get_path(e->env);
	if (fork() == 0)
		execution_command(e);
	else
	{
		wait(NULL);
		// clean_leaks(e);
	}
}
