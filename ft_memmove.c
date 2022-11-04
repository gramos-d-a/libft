/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:55:15 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/25 14:55:15 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (d > s)
		while (n--)
			*(d + n) = *(s + n);
	else
		while (++i < n)
			*(d + i) = *(s + i);
	return (dest);
}
