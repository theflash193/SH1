/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:30:08 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/17 19:29:51 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char	**parse(char const *line)
{
	char	**ret;

	if (!(ret = ft_strsplit2(ft_strtrim(line))))
		return (NULL);
	return (ret);
}
