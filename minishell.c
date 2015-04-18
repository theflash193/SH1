/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:55 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/18 04:44:06 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	minishell(t_env *e)
{
	int ret;

	while (42)
	{
		ft_prompt();
		if ((ret = get_next_line(0, &(e->line))) == -1)
		{
		}
		e->cmd = parse(e->line);
		ft_put_array(e->cmd);
	}
}
