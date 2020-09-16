/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 11:43:08 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 12:44:27 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*rev_str(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	j = -1;
	while (++j < --i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}

static int	count_len(int n)
{
	int i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

static int	negative(int n, int *x)
{
	*x = 1;
	return (-n);
}

static char	*fill_tab(int n, char *sr, int *y)
{
	int i;

	i = 0;
	while (n)
	{
		sr[i++] = (n % 10) + 48;
		n /= 10;
		*y = *y + 1;
	}
	return (sr);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*sr;
	int		is_neg;

	is_neg = 0;
	sr = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n < 0)
		n = negative(n, &is_neg);
	i = count_len(n);
	if (!(sr = (char*)malloc(sizeof(char) * i + 2 + is_neg)))
		return (NULL);
	i = 0;
	if (n == 0)
		sr[i++] = '0';
	sr = fill_tab(n, sr, &i);
	if (is_neg)
		sr[i++] = '-';
	sr[i] = '\0';
	return (rev_str(sr));
}
