/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:28:24 by alex              #+#    #+#             */
/*   Updated: 2023/12/06 18:54:02 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Pega numa parte de uma string desejada que começa em start com tamanho len
//, no fim retorna a mesma string.
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	x;
	size_t	y;

	newstring = (char *)malloc(len + 1);
	x = start;
	y = 0;
	if (!newstring)
		return (newstring);
	while (x < ft_strlen(src) && y < len)
	{
		newstring[y] = src[x];
		x++;
		y++;
	}
	newstring[y] = '\0';
	return (newstring);
}
