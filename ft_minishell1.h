/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:17:29 by grass-kw          #+#    #+#             */
/*   Updated: 2015/04/29 16:57:25 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL1_H
# define FT_MINISHELL1_H
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

void			ft_prompt(void);
char			**fill_env(char **environ);
void			minishell(t_env *e);
char			**parse(char const *line);
char			**ft_strsplit2(char const *s);
char			*ft_strtrim(char const *s);
void			exec_cmd(t_env *e);
int				check_builtins(t_env *e);

void			ft_error(int mode, char *arg);

/*
*** bultins
*/
int				ft_cd(t_env *e);
int				ft_setenv(t_env *e);
void			ft_unsetenv(t_env *e);
void			ft_exit(int status);
void			ft_env(t_env *e);

/*
*** env_routine.c
*/
int				ft_content_exist(char **env, char *name);
char			*ft_get_content(char **env, char *name);
void			ft_set_content(char **env, char *name, char *value);
void			ft_add_content(t_env *e, char *name, char *value);

#endif
