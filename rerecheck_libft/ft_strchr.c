/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:35:33 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:24:54 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *string, int searchedchar)
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
