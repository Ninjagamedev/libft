/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alalmeid@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:28:24 by alex              #+#    #+#             */
/*   Updated: 2023/11/30 09:37:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*newstring;
	int		i;

	newstring = (char *)malloc(len + 1);
	i = 0;
	while (i < (int)len && src[i] != '\0')
	{
		newstring[i] = src[start + i];
		i++;
	}

	newstring[i] = src[i];
	newstring[i] = '\0';

	return (newstring);
}
