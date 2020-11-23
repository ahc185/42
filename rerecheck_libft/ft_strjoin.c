/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:35:40 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:26:48 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen(char const *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) *
					((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		s[k] = s1[i];
		k++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s[k] = s2[j];
		k++;
		j++;
	}
	s[k] = '\0';
	return (s);
}
