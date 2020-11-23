/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:18 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:38:31 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static	char	*ft_strrchr(const char *string, int searchedchar)
{
	int		i;
	char	*s;

	s = (char *)string;
	i = 0;
	if (s[i] == '\0' && searchedchar == '\0')
		return (&s[i]);
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == searchedchar)
			return (&s[i]);
		i--;
	}
	return (NULL);
}

static	char	*ft_strchr(const char *string, int searchedchar)
{
	int		i;
	char	*s;

	s = (char *)string;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == searchedchar)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && searchedchar == '\0')
		return (&s[i]);
	return (NULL);
}

static	char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	j;
	char			*new;

	j = 0;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (j < len)
	{
		new[j] = s[start];
		j++;
		start++;
	}
	new[j] = '\0';
	return (new);
}

static	int		ft_strlen(char const *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			j;
	char			*s;

	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strrchr(set, s1[j]))
		j--;
	j++;
	i = 0;
	s = ft_substr(s1, i, j);
	return (s);
}
