/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 10:20:05 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/24 12:59:39 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static void	check_error(char *path)
{
	if (access(path, F_OK) == -1)
		ft_error(2, path);
	else if (access(path, W_OK) == -1)
		ft_error(4, path);
}

static void	change_directory(t_env *e, char *path)
{
	char	old_pwd[256];
	char	pwd[256];

	getcwd(old_pwd, 256); // je stocke le pwd actuelle dans ma variable old_pwd
	if (chdir(path) == -1)
		check_error(path);
	else
	{
		getcwd(pwd, 256); // je stocke le nouveau pwd dans pwd
		ft_set_content(e->env, "PWD", pwd);
		ft_set_content(e->env, "OLDPWD", old_pwd);
	}
}

static void	check_option(t_env *e)
{
	int	nbr;

	nbr = ft_array_len(e->cmd);
	if (nbr == 1) // Si on a un cd sans argument on fait simplement un cd vers le home
		change_directory(e, ft_get_content(e->env, "HOME"));
	else if (nbr == 2 && ft_strequ(e->cmd[1], "-"))
		change_directory(e, ft_get_content(e->env, "OLDPWD"));
	else
		change_directory(e, e->cmd[1]);
}

int			ft_cd(t_env *e)
{
	check_option(e);
	return (0);
}
