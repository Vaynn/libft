/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 11:31:00 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:42:48 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;

	s3 = NULL;
	if (s1 && s2)
	{
		s3 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (s3 == NULL)
			return (NULL);
		i = 0;
		while (*s1 != '\0')
		{
			s3[i++] = *s1;
			s1++;
		}
		while (*s2 != '\0')
		{
			s3[i++] = *s2;
			s2++;
		}
		s3[i] = '\0';
		return (s3);
	}
	return (NULL);
}
