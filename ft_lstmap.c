/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 15:42:13 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:20:27 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *dup;
	t_list *tmp1;
	t_list *tmp2;

	dup = f(lst);
	tmp1 = dup;
	lst = lst->next;
	while (lst)
	{
		tmp2 = f(lst);
		dup->next = tmp2;
		dup = tmp2;
		lst = lst->next;
	}
	return (tmp1);
}
