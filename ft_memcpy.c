/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 13:23:25 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 16:05:37 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	i = 0;
	x = dst;
	y = (unsigned char*)src;
	while (i < n)
	{
		x[i] = y[i];
		i++;
	}
	return (x);
}
