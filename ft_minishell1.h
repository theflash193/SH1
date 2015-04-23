/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:17:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/23 10:54:50 by anonymous        ###   ########.fr       */
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
int				check_builtins(t_env *e);
void			ft_exit(int status);
/*
*** bultins
*/
int				ft_cd(t_env *e);
/*
*** env_routine.c
*/
int				ft_content_exist(char **env, char *line);
char			*ft_get_content(char **env, char *line);
void			ft_set_content(char **env, char *line, char *new_content);

#endif
