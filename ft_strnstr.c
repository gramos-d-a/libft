/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:11:16 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/26 16:11:16 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	c;

	if (*l == 0 || b == l)
		return ((char *)b);
	if (len == 0)
		return (NULL);
	c = ft_strlen(l);
	while (*b && c <= len--)
	{
		if (!(ft_strncmp((char *)b, (char *)l, c)))
			return ((char *)b);
		b++;
	}
	return (NULL);
}
