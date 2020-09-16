/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 13:58:40 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 13:17:19 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del) (void*, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		tmp = (*alst)->next;
		free(*alst);
		*alst = tmp;
	}
	free(*alst);
	alst = NULL;
}
