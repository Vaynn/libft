/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 15:45:16 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 16:01:52 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;
	size_t			len;

	str = (unsigned char*)s;
	d = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		if (*str == d)
			return (str);
		len++;
		str++;
	}
	return (NULL);
}
