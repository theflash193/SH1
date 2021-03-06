/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bultins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 14:05:47 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/11 15:19:38 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static int		check_builtins2(t_env *e)
{
	if (ft_strequ(e->cmd[0], "env") || ft_strequ(e->cmd[0], "env"))
	{
		ft_env(e);
		return (1);
	}
	else
		return (0);
}

int				check_builtins(t_env *e)
{
	if (ft_strequ(e->cmd[0], "cd") || ft_strequ(e->cmd[0], "cd"))
	{
		ft_cd(e);
		return (1);
	}
	else if (ft_strequ(e->cmd[0], "setenv") || ft_strequ(e->cmd[0], "SETENV"))
	{
		ft_setenv(e);
		return (1);
	}
	else if (ft_strequ(e->cmd[0], "unsetenv") ||
		ft_strequ(e->cmd[0], "UNSETENV"))
	{
		ft_unsetenv(e);
		return (1);
	}
	else if (ft_strequ(e->cmd[0], "exit") || ft_strequ(e->cmd[0], "EXIT"))
	{
		ft_exit(0, e);
		return (1);
	}
	else if (check_builtins2(e))
		return (1);
	else
		return (0);
}
