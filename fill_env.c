/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:36:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/24 12:55:40 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char	**fill_env(char **environ)
{
	char	**ret;
	int		i;

	if(!(ret = (char **)malloc(sizeof(char *) * (ft_array_len(environ) + 1))))
		return (NULL);
	i = 0;
	while (environ[i])
	{
		if (!(ret[i] = ft_strdup(environ[i])))
			return (NULL);
		i++;
	}
	return (ret);
}
