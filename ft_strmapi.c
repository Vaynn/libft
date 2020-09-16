/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:57:40 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:02:37 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*mapi;

	i = 0;
	mapi = NULL;
	if (s && f)
	{
		mapi = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (mapi == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			mapi[i] = f(i, s[i]);
			i++;
		}
		mapi[i] = '\0';
	}
	return (mapi);
}
