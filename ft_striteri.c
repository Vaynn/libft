/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:12:27 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:01:05 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int i;
	unsigned int j;

	if (s && f)
	{
		i = ft_strlen(s);
		j = 0;
		while (j < i && *s)
		{
			f(j, s);
			s++;
			j++;
		}
	}
}
