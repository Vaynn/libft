/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 09:13:49 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 09:19:05 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int			ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *u1;
	unsigned char *u2;

	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	while (*u1 != '\0')
	{
		if (*u1 != *u2)
			return (*u1 - *u2);
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}
