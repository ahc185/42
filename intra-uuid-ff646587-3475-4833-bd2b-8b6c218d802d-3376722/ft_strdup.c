/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:34:59 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 14:35:03 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int			i;
	int			j;
	int			count;
	char		*copy;

	i = 0;
	j = 0;
	count = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	if (!(copy = (char*)malloc(count * sizeof(char))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[j] = src[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
