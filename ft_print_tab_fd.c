/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_tab_fd.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 14:53:49 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 14:54:18 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_tab_fd(char **tab, int fd)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr_fd(tab[i], fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
}
