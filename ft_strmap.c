/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:26:15 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:58:37 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f) (char))
{
	char	*map;
	int		i;

	map = NULL;
	if (s && f)
	{
		map = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (map == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			map[i] = f(s[i]);
			i++;
		}
		map[i] = '\0';
	}
	return (map);
}
