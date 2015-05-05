/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/24 17:48:20 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/05 16:19:34 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static void	clean_leaks(t_env *e)
{
	ft_free_tab(e->env);
	ft_strdel(&(e->line));
	ft_free_tab(e->cmd);
}

void		ft_exit(int status, t_env *e)
{
	clean_leaks(e);
	_Exit(status);
}
