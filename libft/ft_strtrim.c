/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:29:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 10:51:52 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s);
	if (!s)
		return (NULL);
	while (ft_isblank2(*(s + i)))
		i++;
	while (ft_isblank2(*(s + j - 1)))
	{
		ft_putchar(*(s + j));
		j--;
	}
	return (ft_strsub(s, i, (j != 0) ? j -= i : j));
}
