/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:32 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:36:15 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
