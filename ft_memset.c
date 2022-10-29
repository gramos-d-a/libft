/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:21:49 by gramos-d          #+#    #+#             */
/*   Updated: 2022/08/24 19:21:49 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memset(void *s, int c, size_t n)
 {
	size_t			i;
	unsigned char *str;
	unsigned char cc;

	cc = c;
	str = (unsigned char*)s;

	i = 0;
	while (i < n)
	{
		str[i] = cc;
		i++;
	}
	return (s);
}