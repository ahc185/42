/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:32:56 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:24:14 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)pointer1;
	p2 = (unsigned char *)pointer2;
	if (p1 == p2 || size == 0)
		return (0);
	while (size--)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		if (size)
		{
			i++;
		}
	}
	return (0);
}
