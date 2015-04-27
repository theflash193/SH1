/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 13:35:33 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/27 18:15:50 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

/*
*** je cree un nouvelle environemment de taille -2
*** je copie l'environnement excepté la name spécifié dans
*** l'environnement deviens mon nouveau
*/

static int	check_error(t_env *e)
{
	size_t len;

	len = ft_array_len(e->cmd);
	if (len != 2)
	{
		ft_error(3, "unsetenv");
		return (1);
	}
	else if (!ft_content_exist(e->env, e->cmd[1]))
		ft_error(5, "");
	return (0);
}

static void	ft_new_env(t_env *e, char *name)
{
	char	**new_env;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_env = (char **)malloc(sizeof(char *) * (ft_array_len(e->env) - 1));
	while (e->env[i])
	{
		if (ft_strequ(e->env[i], name))
		{
			new_env[j] = ft_strdup(e->env[i]);
			j++;
		}
		i++;
	}
	new_env[j] = "\0";
	ft_free_tab(e->env);
	e->env = new_env;
}

void	ft_unsetenv(t_env *e)
{
	if (check_error(e))
		return ;
	ft_new_env(e, e->cmd[1]);
}
