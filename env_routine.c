/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_routine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 17:24:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/29 16:48:48 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

/*
*** check the content if the name exist in environnement
*** return 1 if name exist otherwise 0
*/

int		ft_content_exist(char **env, char *name)
{
	char	*arg;
	int		i;

	i = 0;
	arg = ft_strjoin(name, "=");
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, ft_strlen(arg)))
			return (1);
		i++;
	}
	ft_strdel(&arg);
	return (0);
}

char	*ft_get_content(char **env, char *name)
{
	char	*ret;
	char	*arg;
	int		i;
	int		size;

	i = 0;
	arg = ft_strjoin(name, "=");
	size = ft_strlen(arg);
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, size))
			return (ret = ft_strdup(env[i] + size));
		i++;
	}
	ft_strdel(&arg);
	return (NULL);
}

void	ft_set_content(char **env, char *name, char *value)
{
	char	*arg;
	int		i;

	i = 0;
	arg = ft_strjoin(name, "=");
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, ft_strlen(arg)))
		{
			ft_strdel(&env[i]);
			env[i] = ft_strjoin(arg, value);
			ft_strdel(&arg);
			break ;
		}
		i++;
	}
	ft_strdel(&arg);
}

void	ft_add_content(t_env *e, char *name, char *value)
{
	char	**new_env;
	int		size;
	int		i;

	i = 0;
	size = ft_array_len(e->env);
	new_env = (char **)malloc(sizeof(char *) * (size + 2));
	while (e->env[i])
	{
		new_env[i] = ft_strdup(e->env[i]);
		i++;
	}
	if (ft_strequ(value, ""))
		new_env[i] = ft_strjoin(name, "=");
	else
		new_env[i] = ft_strjoin(name, ft_strjoin("=", value));
	i++;
	new_env[i] = 0;
	ft_free_tab(e->env);
	e->env = new_env;
}
