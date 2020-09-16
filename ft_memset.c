/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 09:58:28 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 16:08:08 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = s;
	while (i < len)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
