/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/24 15:30:01 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/27 14:56:32 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static int	check_error(t_env *e, int len)
{
	(void)e;
	if (!(len >= 1 || len <= 3))
	{
		ft_error(3, "setenv");
		return (1);
	}
	return (0);
}

static int	print_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		ft_putendl(env[i]);
		i++;
	}
	return (0);
}

int			ft_setenv(t_env *e)
{
	int	len;

	len = ft_array_len(e->cmd);
	if (check_error(e, len))
		return (-1);
	else if (len == 1)
		print_env(e->env);
	else if (!ft_content_exist(e->env, e->cmd[1]))
	{
		if (len == 2)
			ft_add_content(e, e->cmd[1], "");
		else
			ft_add_content(e, e->cmd[1], e->cmd[2]);
		return (0);
	}
	else
	{
		if (len == 2)
			ft_set_content(e->env, e->cmd[1], "");
		else
			ft_set_content(e->env, e->cmd[1], e->cmd[2]);
		return (0);
	}
	return (0);
}
