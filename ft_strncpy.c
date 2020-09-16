/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 13:34:57 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:16:57 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t n;

	n = 0;
	while (n < len && src[n] != '\0')
	{
		dst[n] = src[n];
		n++;
	}
	while (n < len)
	{
		dst[n] = '\0';
		n++;
	}
	return (dst);
}
