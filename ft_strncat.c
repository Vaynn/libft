/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:11:47 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:17:39 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	p;
	int		i;

	p = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (p < n && s2[p] != '\0')
	{
		s1[i] = s2[p];
		i++;
		p++;
	}
	s1[i] = '\0';
	return (s1);
}
