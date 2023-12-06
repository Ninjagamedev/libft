/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alalmeid@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:23:32 by alalmeid          #+#    #+#             */
/*   Updated: 2023/11/27 23:26:22 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < (unsigned int)n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
