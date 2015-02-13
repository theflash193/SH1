/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:28:02 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 10:58:29 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	int		i;
	char	*ret;

	l = ft_strlen(s);
	ret = ft_strnew(l + 1);
	while (s[i])
	{
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	return (ret);
}
