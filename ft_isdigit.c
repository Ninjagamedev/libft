/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:17:49 by alalmeid          #+#    #+#             */
/*   Updated: 2023/10/06 15:41:57 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main(void)
{
	char c;
	c = '2';
	printf("ft_isdigit result: %d \n", ft_isdigit(c));
	printf("isdigit original: %d", isdigit(c));
	return (0);
}
*/