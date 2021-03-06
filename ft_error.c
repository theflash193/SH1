/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:36:12 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/11 15:25:06 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void ft_error(int mode, char *arg)
{
	if (mode == 1)
	{
		ft_putstr("command not found: ");
		if (!ft_strcmp(arg, ""))
			ft_putendl("");
		else
			ft_putendl(arg);
	}
	if (mode == 2)
	{
		ft_putstr("No such file or directory: ");
		ft_putendl(arg);
	}
	if (mode == 3)
	{
		ft_putstr(arg);
		ft_putendl(": too many arguments");
	}
	if (mode == 4)
	{
		ft_putstr("permission denied: ");
		ft_putendl(arg);
	}
	if (mode == 5)
		ft_putendl("");
}
