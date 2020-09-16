/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 11:12:43 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 16:11:29 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;
	int		len;
	char	*p;

	b = (char)c;
	i = 0;
	len = ft_strlen(s);
	p = (char*)s;
	while (i <= len)
	{
		if (*p == b)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}
