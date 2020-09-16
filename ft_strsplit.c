/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 14:03:11 by yvmartor     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:58:41 by yvmartor    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	nb_words;
	int w_push;
	int s_push;

	nb_words = 0;
	w_push = 0;
	s_push = 0;
	while (*s != '\0')
	{
		if ((*s == 'c') && (s_push == 0))
		{
			w_push = 0;
			s_push = 1;
			s++;
		}
		if (*s != c)
		{
			w_push = 1;
			s_push = 0;
			nb_words++;
		}
		s++;
	}
	return (nb_words);
}

static int	ft_size_of_words(const char *s, int i, char c)
{
	int size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_strspt(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!(split = (char**)malloc(sizeof(char*) * ft_count_words(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			split[j] = (char*)malloc(sizeof(char) *
			ft_size_of_words(s, i, c) + 1);
			while (s[i] != c && s[i] != '\0')
				split[j][k++] = s[i++];
			split[j++][k] = '\0';
		}
	}
	split[j] = NULL;
	return (split);
}

char		**ft_strsplit(char const *s, char c)
{
	if (s)
		return (ft_strspt(s, c));
	return (NULL);
}
