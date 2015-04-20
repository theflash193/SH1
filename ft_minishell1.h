/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:17:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/20 12:27:37 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MINISHELL1
# define FT_MINISHELL1
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>

typedef struct	s_env
{
	char		**env;
	char		*line;
	char		**cmd;
	char		**path;
}				t_env;

void			ft_prompt();
char			**fill_env(char **environ);
void			minishell(t_env *e);
char			**parse(char const *line);
char			**ft_strsplit2(char const *s);
char			*ft_strtrim(char const *s);
void			exec_cmd(t_env *e);

#endif
