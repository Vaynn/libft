/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 15:10:03 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 13:24:35 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*x;
	unsigned char	*y;
	unsigned char	tmp[len];
	size_t			i;
	size_t			j;

	x = (unsigned char*)dst;
	y = (unsigned char*)src;
	i = 0;
	j = 0;
	if (len > 65535)
		return (NULL);
	while (i < len)
	{
		tmp[i] = y[i];
		i++;
	}
	while (j < len)
	{
		x[j] = tmp[j];
		j++;
	}
	return (x);
}
