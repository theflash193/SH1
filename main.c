/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:22:03 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/18 04:17:40 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		main(void)
{
	extern char **environ;
	t_env	e;

	e.line = NULL;
	e.cmd = NULL;
	e.env = fill_env(environ);
	minishell(&e);
	return (0);
}


