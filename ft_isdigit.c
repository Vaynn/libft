/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isdigit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:41:25 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 08:32:09 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int			ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
