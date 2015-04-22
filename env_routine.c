/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_routine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 17:24:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/22 17:09:10 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

/*
*** check the content if the line exist in environnement
*** return 1 if line exist otherwise 0
*/

int	ft_content_exist(char **env, char *line)
{
	char	*arg;
	int		i;

	i = 0;
	arg = ft_strjoin(line, "=");
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, ft_strlen(arg)))
			return (1);
		i++;
	}
	ft_strdel(arg);
	return (0);
}

/*
*** get the content in line
*/

char	*ft_get_content(char **env, char *line)
{
	char	*ret;
	char	*arg;
	int		i;
	int		size;

	i = 0;
	arg = ft_strjoin(line, "=");
	size = ft_strlen(arg);
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, size)
			return (ft_strdup(env[i] + size));
		i++;
	}
	ft_strdel(&arg);
	return (NULL);
}

/*
*** set the content of line with new_content
*/

void	ft_set_content(char **env, char *line, char *new_content)
{
	char	*arg;
	int		i;

	i = 0;
	arg = ft_strjoin(line, "=");
	while (env[i])
	{
		if (ft_strnequ(env[i], arg, ft_strlen(arg)))
		{
			ft_strdel(&env[i]);
			env[i] = ft_strjoin(arg, new_content);
			ft_strdel(arg);
			break;
		}
		i++;
	}
	ft_strdel(arg);
}
