/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrim.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 13:36:15 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 15:54:28 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_count_begin_space(const char *str)
{
	int		i;

	i = 0;
	while ((*str == ' ' || *str == '\n' || *str == '\t') && *str)
	{
		i++;
		str++;
	}
	return (i);
}

static size_t			ft_count_end_space(const char *str)
{
	int		i;
	size_t	j;

	i = ft_strlen(str) - 1;
	j = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && i >= 0)
	{
		i--;
		j++;
	}
	return (j);
}

char					*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	size_t	begin;
	size_t	end;

	if (s)
	{
		if (ft_count_begin_space(s) == ft_strlen(s))
			trim = (char*)malloc(sizeof(char));
		else
			trim = (char*)malloc(sizeof(char) * ft_strlen(s)
			- ft_count_begin_space(s) - ft_count_end_space(s) + 1);
		if (trim == NULL)
			return (NULL);
		i = 0;
		begin = ft_count_begin_space(s);
		end = ft_strlen(s) - ft_count_end_space(s);
		if (ft_count_begin_space(s) == 0 && ft_count_end_space(s) == 0)
			return (ft_strdup((char*)s));
		while (begin < end)
			trim[i++] = s[begin++];
		trim[i] = '\0';
		return (trim);
	}
	return (NULL);
}
