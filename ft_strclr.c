/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strclr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 10:55:32 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 10:57:40 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	if (s)
	{
		while (*s)
		{
			*s = '\0';
			s++;
		}
	}
}