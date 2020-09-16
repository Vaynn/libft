/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 09:32:39 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:19:35 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			m;
	unsigned char	*u1;
	unsigned char	*u2;

	m = 0;
	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	while (m < n && (*u1 || *u2))
	{
		if (*u1 != *u2)
			return (*u1 - *u2);
		m++;
		u1++;
		u2++;
	}
	return (0);
}
