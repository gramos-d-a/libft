/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:03 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/26 15:09:03 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
        c += 32;
    return (c);
}