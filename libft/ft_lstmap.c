/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 13:53:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/10 11:01:42 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (!lst)
		return (NULL);
	ret = f(lst);
	while (lst->next)
	{
		lst = lst->next;
		ft_lst_push_back(&ret, f(lst));
	}
	return (ret);
}
