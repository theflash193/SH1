/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:36:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/07 18:51:21 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static char	**create_env(char **ret)
{
	char	buf[2048];

	getcwd(buf, 2048);
	if (!(ret = (char **)malloc(sizeof(char *) * 8)))
		return (NULL);
	ret[0] = ft_strdup("HOME=");
	ret[1] = ft_strdup("LOGNAME=default_login");
	ret[2] = ft_strdup("SHLVL=1");
	ret[3] = ft_strjoin("PWD=", buf);
	ret[4] = ft_strdup("OLDPWD=");
	ret[5] = ft_strdup("PATH=/bin");
	ret[6] = ft_strdup("USER=default_login");
	ret[7] = 0;
	return (ret);
}

char		**fill_env(char **environ)
{
	char	**ret;
	int		i;

	ret = NULL;
	if (environ && environ[0] == 0)
		return (create_env(ret));
	if (!(ret = (char **)malloc(sizeof(char *) * (ft_array_len(environ) + 1))))
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
