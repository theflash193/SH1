/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:30:08 by grass-kw          #+#    #+#             */
/*   Updated: 2015/05/06 18:25:55 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char	**parse(char *line)
{
	char	**ret;
	char	*tmp_line = ft_strtrim(line);

	tmp_line = ft_strtrim(line);
	if (!(ret = ft_strsplit2(tmp_line)))
		return (NULL);
	ft_strclr(tmp_line);
	ft_strdel(&tmp_line);
	ft_strclr(line);
	ft_strdel(&line);
	return (ret);
}
