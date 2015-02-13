/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:22:03 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/13 16:49:33 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		main(int argc, char **argv, char **environ)
{
	t_list	*lst;

	int		ret;
	char	*line;
	t_env	e;

	e->env = env;
	while (42)
	{
		ft_prompt();
		if (ret = get_next_line(0, &line))
		{}
		parse(line);
	}
	return (0);
}
