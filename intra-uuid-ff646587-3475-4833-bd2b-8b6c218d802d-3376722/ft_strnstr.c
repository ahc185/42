/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:37:53 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:22:25 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char			*st1;
	char			*st2;
	unsigned long	i;
	unsigned long	j;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	if (st2[i] == '\0')
		return (st1);
	while (st1[i] != '\0' && i < n)
	{
		j = 0;
		while (st2[j] == st1[j + i] && j + i < n)
		{
			if (st2[j + 1] == '\0')
				return (st1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
