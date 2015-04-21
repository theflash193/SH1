/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 10:20:05 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/21 16:09:15 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

// static int	mv_path(t_env *e, char *path)
// {
// 	// int		i;
// 	// int		ret;
// 	// char	tmp_pwd[256];
// 	// char	tmp_oldpwd[256];

// 	// i = 0;
// 	// while (e->env[i])
// 	// {
// 	// 	if (ft_strnstr(e->env[i], "PWD=", 4))
// 	// 		ft_strcpy(tmp_pwd, e->env[i] + 4);
// 	// 	i++;
// 	// }
// 	// // J'utilise chdir pour changer le repertoire
// 	// // je modifie le PWD avec le nouveau chemin
// 	// // je modifie le OLDPWD (il devient egale a l'ancien PWD)
// 	return (0);
// }

static int check_option(t_env *e, home)
{
	int	nbr;

	nbr = ft_array_len(e->env);
	if (nbr == 1) // Si on a un cd sans argument on fait simplement un cd vers le home
		mv_path();
}

int			ft_cd(t_env *e)
{
	char	home_tmp[256];
	int i;

	while (env[i]) // je parcours le home pour recuper le home
	{
		if (ft_strnstr(env[i], "HOME=", 5))
		{
			home_tmp = ft_strcpy(home_tmp, env[i] + 5);
			break;
		}
		i++;
	}
}
