/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:17:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/18 04:40:18 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MINISHELL1
# define FT_MINISHELL1
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_env
{
	char		**env;
	char		*line;
	char		**cmd;
}				t_env;

void			ft_prompt();
char			**fill_env(char const **environ);
void			minishell(t_env *e);
char			**parse(char const *line);
char			**ft_strsplit2(char const *s);
char			*ft_strtrim(char const *s);
#endif
