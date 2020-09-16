/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 16:11:38 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 17:35:40 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *str;

	str = (void*)malloc(sizeof(void) * size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
