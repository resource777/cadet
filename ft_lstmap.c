/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 14:58:31 by jaewonki          #+#    #+#             */
/*   Updated: 2021/12/31 14:58:31 by jaewonki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*cur;

	if (!lst || !f)
		return (0);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (0);
	cur = ret;
	lst = lst->next;
	while (lst)
	{
		cur->next = ft_lstnew(f(lst->content));
		if (!(cur->next))
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		cur = cur->next;
		lst = lst->next;
	}
	return (ret);
}
