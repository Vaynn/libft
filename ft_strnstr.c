/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 10:44:53 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 15:53:46 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*botte;
	char			*aigue;

	i = 0;
	j = 0;
	botte = (char *)haystack;
	aigue = (char *)needle;
	if (!*aigue)
		return (botte);
	while (botte[j] != '\0' && j < n)
	{
		i = 0;
		if (botte[j] == aigue[0])
		{
			while (botte[j + i] == aigue[i] && aigue[i] != '\0' && j + i < n)
				i++;
			if (aigue[i] == '\0')
				return (botte + j);
		}
		j++;
	}
	return (NULL);
}
