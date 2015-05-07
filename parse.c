/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:30:08 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/07 18:36:33 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	parse(t_env *e)
{
	char	*tmp_line = ft_strtrim(e->line);

	ft_putendl("parsing ->");
	ft_putdata((void *)e->line, "line", 1);
	if (e->cmd != NULL)
		ft_free_tab(e->cmd);
	tmp_line = ft_strtrim(e->line);
	ft_putdata((void *)tmp_line, "tmp_line", 1);
	ft_putendl("end ->");
	if (!(e->cmd = ft_strsplit2(tmp_line)))
		return ;
	ft_strclr(tmp_line);
	ft_strdel(&tmp_line);
	ft_strclr(e->line);
	ft_strdel(&(e->line));
}
