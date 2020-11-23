/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:29:00 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:39:12 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*s;
	int				i;
	unsigned int	sum;

	i = 0;
	if ((nmemb == 0) && (size == 0))
		return (NULL);
	if (!(s = malloc(nmemb * size)))
		return (NULL);
	sum = nmemb * size;
	while (sum--)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
