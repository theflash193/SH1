/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:55 by grass-kw          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/04/17 19:22:13 by grass-kw         ###   ########.fr       */
=======
/*   Updated: 2015/04/16 17:29:12 by grass-kw         ###   ########.fr       */
>>>>>>> 0e7f1d90e936f8adf38eda1a049a266ad96b6c27
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	minishell(t_env *e)
{
<<<<<<< HEAD
	int ret;

	while (42)
	{
		ft_prompt();
		if ((ret = get_next_line(0, &(e->line))) == -1)
		{
		}
		e->cmd = parse(e->line);
		ft_put_array(e->cmd);
=======
	while (42)
	{
		ft_prompt(); // affichage du prompt
		if (ret = get_next_line(0, &e->line)) // lecture de la ligne
		{}
		parse(line);
		// exec_cmd(); // execution de la commande
>>>>>>> 0e7f1d90e936f8adf38eda1a049a266ad96b6c27
	}
}
