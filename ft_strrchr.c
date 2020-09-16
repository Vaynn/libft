/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 13:42:47 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:13:06 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	int		len;
	char	d;

	i = 0;
	p = (char*)s;
	len = ft_strlen(s);
	d = (char)c;
	while (i < len)
	{
		p++;
		i++;
	}
	while (i >= 0)
	{
		if (*p == d)
			return (p);
		p--;
		i--;
	}
	return (NULL);
}
