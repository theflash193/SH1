/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:36:12 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/23 11:39:12 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void ft_error(int mode, char *arg)
{
	if (mode == 1)
	{
		ft_putstr("command not found: ");
		ft_putendl(arg);
	}
	if (mode == 2)
	{
		ft_putstr("no such file or directory: ");
		ft_putendl(arg);
	}
	if (mode == 3)
		ft_putendl("cd: too many arguments");
	if (mode == 4)
	{
		ft_putstr("permission denied: ");
		ft_putendl(arg);
	}
}
