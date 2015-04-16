/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:17:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/16 17:29:34 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MINISHELL1
# define FT_MINISHELL1
# include "libft.h"
# include <stdlib.h>

typedef struct	s_env
{
	char		**env;
	char		*line;
}				t_env;

void			ft_prompt();
char			**fill_env(char **environ);
void			minishell(t_env *e);
#endif
