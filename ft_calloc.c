/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:41:41 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/26 17:41:41 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if ((ptr = malloc(nmemb*size)) == NULL)
        return(NULL);
    ft_memset((unsigned char *)ptr, 0, nmemb*size);
    return(ptr);
}