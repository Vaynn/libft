/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:22:44 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:18:09 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	p;
	int		i;
	size_t	size_len_d;

	p = 0;
	i = 0;
	size_len_d = ft_strlen(dst);
	if (size > size_len_d + 1)
	{
		while (dst[i] != '\0')
			i++;
		while ((p < (size - size_len_d - 1)) && src[p] != '\0')
		{
			dst[i] = src[p];
			i++;
			p++;
		}
		dst[i] = '\0';
	}
	if (size < size_len_d)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + size_len_d);
}
