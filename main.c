/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:22:03 by grass-kw          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/04/17 19:14:27 by grass-kw         ###   ########.fr       */
=======
/*   Updated: 2015/04/16 17:29:56 by grass-kw         ###   ########.fr       */
>>>>>>> 0e7f1d90e936f8adf38eda1a049a266ad96b6c27
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		main(void)
{
	extern char **environ;
	t_env	e;

	e.line = NULL;
<<<<<<< HEAD
	e.cmd = NULL;
=======
>>>>>>> 0e7f1d90e936f8adf38eda1a049a266ad96b6c27
	e.env = fill_env(environ);
	minishell(&e);
	return (0);
}
