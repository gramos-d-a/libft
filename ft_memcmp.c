/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:40:39 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/26 14:40:39 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned const char *ss1;
    unsigned const char *ss2;

    i = 0;
    ss1 = (unsigned const char *)s1;
    ss2 = (unsigned const char *)s2;

    if (n == 0)
        return(0);
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return(0);
}