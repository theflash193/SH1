/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:55 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/07 18:53:03 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"
#include <stdio.h>

void	minishell(t_env *e)
{
	int	ret;

	while (42)
	{
		ft_putendl("-------------     <Avant la lecture du get_next_line READ>  ---------");
		ft_prompt();
		if ((ret = get_next_line(0, &(e->line))) == -1)
			ft_exit(0);
		ft_putendl("----- <Lecture FINI du get_next_line> ------------------------------");
		parse(e);
		exec_cmd(e);
		// ft_putdata((void *)e->line, "<Apres execve> line", 1);
		// ft_putendl("");
	}
}
