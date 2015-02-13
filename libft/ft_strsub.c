/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:29:12 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 10:52:26 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	while (start--)
		s++;
	while (len--)
	{
		ret[i] = *s;
		i++;
		s++;
	}
	return (ret);
}
