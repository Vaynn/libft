/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 14:16:08 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:33:25 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	char	*botte;

	i = 0;
	j = 0;
	k = 0;
	botte = (char*)haystack;
	if (needle[j] == '\0')
		return (botte);
	while (botte[i] != '\0')
	{
		j = 0;
		while (botte[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (botte + i);
			k++;
			j++;
		}
		i++;
		k = i;
	}
	return (0);
}
