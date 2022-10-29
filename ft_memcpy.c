/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:57:24 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/25 13:57:24 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;
    size_t i;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned const char *)src;

    if(src == dest)
        return(NULL);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}