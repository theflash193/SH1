/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:36:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/05 10:31:14 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

// je cree un env avec un PATH, PWD, OLDPWD, USER
// HOME=
// LOGNAME=default_login
// SHLVL=1
// OLDPWD=
// PWD=retour de getpwd
// PATH=/bin
// USER=default_login

static char	**create_env(char **ret)
{
	char	buf[256];

	getcwd(buf, 256);
	if (!(ret = (char **)malloc(sizeof(char *) * 8)))
		return (NULL);
	ret[0] = ft_strdup("HOME=");
	ret[1] = ft_strdup("LOGNAME=default_login");
	ret[2] = ft_strdup("HOME=");
	ret[3] = ft_strdup("HOME=");
	ret[4] = ft_strdup("LOGNAME=default_login");
	ret[5] = ft_strdup("HOME=");
	ret[6] = ft_strdup("HOME=");
}

char	**fill_env(char **environ)
{
	char	**ret;
	int		i;

	if (environ && environ[0] == 0)
		return create_env(ret);
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
