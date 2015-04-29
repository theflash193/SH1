/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 13:45:31 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/29 16:09:42 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"
static void	print_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		ft_putendl(env[i]);
		i++;
	}
}
static int	check_error(t_env *e)
{
	int	l;

	l = ft_array_len(e->cmd);
	if (l > 1)
	{
		ft_putstr("env : ");
		ft_error(2, e->cmd[1]);
		return (1);
	}
	return (0);
}

void	ft_env(t_env *e)
{
	int	l;

	l = ft_array_len(e->cmd);
	if (check_error(e))
		return ;
	if (l == 1)
		print_env(e->env);
}
