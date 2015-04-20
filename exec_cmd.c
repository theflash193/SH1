/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 09:48:21 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/20 12:46:37 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static char	**get_path(char **env)
{
	int	i;

	i = 0;
	// ft_put_array(env);
	while (env[i])
	{
//		ft_putdata((void *)env[i], "env = ", 1);
		if (ft_strnstr(env[i], "PATH=", 5))
		{

			ft_putdata(ft_strnstr(env[i], "PATH=", 5), "env :", 1);
		}
		i++;
	}
	exit(0);
	return (NULL);
}

void		exec_cmd(t_env *e)
{
	// je verifie la commande si elle est invalide j'affiche un message d'erreur et e rend la min a l'utilisateur
	// Si (la commande est valide et que c'est un des biltin)
	//  - j'execute ce biltin
	// Sinon
	// - je vais chercher ma cmd dans mon PATH
	// - j'execute ma commande
	e->path = get_path(e->env); // je stocke le PATH dans un double tableau
	ft_put_array(e->path);
	if (fork() == 0)
	{
		// while ()
		execve("/bin/ls", e->cmd, NULL);
	}
	else
		wait(NULL);
}
