/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:02:56 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/28 15:02:56 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *j;
    size_t i;
    size_t x;

    if (!s1 || !s2)
        return(NULL);
    i = -1;
    x = -1;
    if(!(j = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
        return(0);
    while(s1[++i])
        j[i] = s1[i];
    while(s2[++x])
    {
        j[i] = s2[x];
        i++;
    }
    j[i] = '\0';
    return(j);
}