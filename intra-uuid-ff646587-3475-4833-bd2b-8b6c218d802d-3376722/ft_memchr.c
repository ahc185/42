/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:32:44 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:34:59 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *memoryblock, int searchedchar, size_t size)
{
	char			*s;
	unsigned long	i;

	s = (char *)memoryblock;
	i = 0;
	while (i < size)
	{
		if (s[i] == searchedchar)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
