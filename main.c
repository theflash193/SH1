/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:22:03 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/16 17:29:56 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		main(void)
{
	extern char **environ;
	t_env	e;

	e.line = NULL;
	e.env = fill_env(environ);
	minishell(&e);
	return (0);
}
