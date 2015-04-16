/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:55 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/16 17:29:12 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	minishell(t_env *e)
{
	while (42)
	{
		ft_prompt(); // affichage du prompt
		if (ret = get_next_line(0, &e->line)) // lecture de la ligne
		{}
		parse(line);
		// exec_cmd(); // execution de la commande
	}
}
