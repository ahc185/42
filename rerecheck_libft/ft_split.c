/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:35:25 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 14:35:27 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		**ft_free(char **d)
{
	int	i;

	i = 0;
	while (d[i])
	{
		free(d[i]);
		i++;
	}
	free(d);
	return (NULL);
}

static char		*ft_cpy(char *d, char *s, int i, int n)
{
	int	j;

	j = 0;
	while (i < n && s[i])
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}

unsigned int	ft_nb_string(char const *s, char c)
{
	int	i;
	int	nb;

	if (!s[0])
		return (0);
	nb = 0;
	if (s[0] != c)
		nb++;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			nb++;
		i++;
	}
	return (nb);
}

static char		**ft_remp(char const *s, char c, char **d)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		count = 0;
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		if (!(d[j] = (char *)malloc(sizeof(char) * (count + 1))))
			return (ft_free(d));
		d[j] = ft_cpy(d[j], (char *)s, i - count, i);
		j++;
	}
	return (d);
}

char			**ft_split(char const *s, char c)
{
	char	**d;
	int		count;

	if (!s)
		return (NULL);
	count = ft_nb_string(s, c);
	if (!(d = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	if (count == 0)
	{
		d[count] = 0;
		return (d);
	}
	d = ft_remp(s, c, d);
	d[count] = 0;
	return (d);
}
