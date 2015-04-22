/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 10:20:05 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/22 17:09:32 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static int	change_directory(t_env *e, char *path)
{
	char	old_pwd[256];
	char	pwd[256];

	old_pwd = getcwd(old_pwd, 256); // je stocke le pwd actuelle dans ma variable old_pwd
	chdir(path); // je change de diretory
	pwd = getcwd(pwd, 256); // je stocke le nouveau pwd dans pwd
	ft_set_content(e->env, "PWD", pwd);
	ft_set_content(e->env, "OLDPWD", old_pwd);
	return (0);
}

static int check_option(t_env *e, char *home)
{
	int	nbr;

	nbr = ft_array_len(e->env);
	if (nbr == 1) // Si on a un cd sans argument on fait simplement un cd vers le home
		change_directory(home);
}

int			ft_cd(t_env *e)
{
	char	home_tmp[256];
	int i;

	while (env[i]) // je parcours le home pour recuperer le home
	{
		if (ft_strnstr(env[i], "HOME=", 5))
		{
			home_tmp = ft_strcpy(home_tmp, env[i] + 5);
			break;
		}
		i++;
	}

}
