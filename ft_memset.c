/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:32 by alalmeid          #+#    #+#             */
/*   Updated: 2023/10/06 17:36:29 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
}
/*
int main (void)
{
	char str[50] = "Hello World!";
	ft_memset(str, 'a', 5);
	printf("ft_memset: %s \n", str);
	ft_memset(str, 'x', 5);
	printf("memset original: %s", str);
	return (0);
}
*/