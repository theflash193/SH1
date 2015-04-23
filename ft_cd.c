/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 10:20:05 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/23 13:35:56 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static int	check_error(path)
{

}

static int	change_directory(t_env *e, char *path)
{
	char	old_pwd[256];
	char	pwd[256];
	int		ret;

	ret = 0;
	old_pwd = getcwd(old_pwd, 256); // je stocke le pwd actuelle dans ma variable old_pwd
	if ((ret = chdir(path) = -1)
	{}
	pwd = getcwd(pwd, 256); // je stocke le nouveau pwd dans pwd
	ft_set_content(e->env, "PWD", pwd);
	ft_set_content(e->env, "OLDPWD", old_pwd);
	return (ret);
}

static int check_option(t_env *e)
{
	int	nbr;

	nbr = ft_array_len(e->cmd);
	if (nbr == 1) // Si on a un cd sans argument on fait simplement un cd vers le home
		return (change_directory(ft_get_content("HOME")));
	else if (nbr == 2 && ft_strequ(e->cmd[1], "-"))
		return (change_directory(ft_get_content("OLDPWD")));
	else
		return (change_directory(e->cmd[1]));
}

int			ft_cd(t_env *e)
{
	int	ret;

	if ((ret = check_option(e)) == -1)
		ft_error();
}
