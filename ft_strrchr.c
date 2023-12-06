/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:59:27 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:54:01 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	//Caso especifico para quando o c for '\0'
char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			p = (char *)str;
		str++;
	}
	if (*str == (unsigned char)c)
		p = (char *)str;
	return (p);
}
