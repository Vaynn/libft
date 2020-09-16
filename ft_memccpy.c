/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 13:57:06 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 16:04:07 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*x;
	unsigned char		*y;
	unsigned char		z;
	size_t				i;

	x = (unsigned char*)dst;
	y = (unsigned char*)src;
	z = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*y == z)
		{
			*x = z;
			return (x + 1);
		}
		*x = *y;
		x++;
		y++;
		i++;
	}
	return (NULL);
}
