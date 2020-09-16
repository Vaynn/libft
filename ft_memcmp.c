/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 15:54:01 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 14:29:41 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			len;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	len = 0;
	while (len < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		len++;
		str1++;
		str2++;
	}
	str1--;
	str2--;
	return (0);
}
