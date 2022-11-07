/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:10 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/26 15:11:10 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!c)
		return (&str[ft_strlen(str)]);
	while (*str)
	{
		if ((unsigned char)c == *str)
			return ((char *)str);
		str++;
	}
	return ((char *)str);
}
