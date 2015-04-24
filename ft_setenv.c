/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/24 15:30:01 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/24 17:46:12 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"
static	check_error(t_env *e)
{
	if ()
}

int		ft_setenv(const char *name, const char *value, int overwrite, t_env *e)
{
	if (check_error())
		return (-1);
	if (!ft_content_exist(name))
	{
		ft_add_content(e, name, value);
		return (0);
	}
}
