/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bultins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 14:05:47 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/27 14:47:57 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int	check_builtins(t_env *e)
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
	// else if (ft_strequ(cmd[0], "unsetenv") || ft_strequ(cmd[0], "UNSETENV"))
	// {
	// 	ft_unsetenv();
	// 	return (1);
	// }
	// else if (ft_strequ(cmd[0], "env") || ft_strequ(cmd[0], "env"))
	// {
	// 	ft_env();
	// 	return (1);
	// }
	else if (ft_strequ(e->cmd[0], "exit") || ft_strequ(e->cmd[0], "EXIT"))
	{
		ft_exit(0);
		return (1);
	}
	else
		return (0);
}
