/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 13:07:41 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:40:14 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	j;

	sub = NULL;
	if (s)
	{
		sub = (char*)malloc(sizeof(char) * (len) + 1);
		if (sub == NULL)
			return (NULL);
		j = 0;
		while (j < len)
		{
			sub[j] = s[start];
			j++;
			start++;
		}
		sub[j] = '\0';
		return (sub);
	}
	return (NULL);
}
