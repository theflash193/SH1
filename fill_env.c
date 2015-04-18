/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:36:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/18 04:40:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char	**fill_env(char const **environ)
{
	char	**ret;
	int		i;

	ret = (char **)malloc(sizeof(char *) * (ft_array_len(environ) + 1));
	i = 0;
	while (environ[i])
	{
		if (!(ret[i] = ft_strdup(environ[i])))
			return (NULL);
		i++;
	}
	return (ret);
}
