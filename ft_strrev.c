/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 14:18:05 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 14:56:06 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_strrev(char *str)
{
	char	tmp;
	size_t	i;
	size_t	j;

	tmp = 0;
	i = 0;
	j = ft_strlen(str) - 1;
	if (str)
	{
		while (i < ft_strlen(str) / 2)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
			i++;
			j--;
		}
	}
}
