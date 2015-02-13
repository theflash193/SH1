/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:44:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/13 16:53:50 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		m;

	i = 0;
	m = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			m++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i] == c)
			i++;
	}
	return (m);
}

static char	**ft_create_tab(t_list **split, char const *s, char c, int m)
{
	int				i;
	int				j;
	int				k;
	unsigned int	start;

	i = 0;
	j = 0;
	while (s[i] && m > 0)
	{
		k = 0;
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
		{
			i++;
			k++;
		}
		split[j] = ft_strsub(s, start, k);
		j++;
		m--;
	}
	split[j] = '\0';
	return (split);
}

char		**ft_strsplit(char const *s, char c)
{
	int		m;
	t_list	*split;

	if (!s)
		return (NULL);
	else if (s[0] == '\0')
	{
		if ((split = lstnew())
			return (NULL);
		split[0] = NULL;
		return (split);
	}
	else
	{
		m = ft_count_words(s, c);
		if ((split = (char **)ft_memalloc((sizeof(char *) * (m + 1)))) == NULL)
			return (NULL);
		split = ft_create_tab(split, s, c, m);
		return (split);
	}
}
