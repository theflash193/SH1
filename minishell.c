/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:55 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/11 11:24:23 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"
#include <stdio.h>

void	minishell(t_env *e)
{
	int	ret;

	while (42)
	{
		ft_prompt();
		if ((ret = get_next_line(0, &(e->line))) == -1)
			ft_exit(0, e);
		parse(e);
		exec_cmd(e);
	}
}
