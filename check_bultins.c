/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bultins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 14:05:47 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/24 13:04:07 by grass-kw         ###   ########.fr       */
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
	// else if (ft_strequ(cmd[0], "setenv") || ft_strequ(cmd[0], "SETENV"))
	// {
	// 	ft_setenv();
	// 	return (1);
	// }
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
	else
		return (0);
}