/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:16:06 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/31 14:16:06 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charc(long x)
{
	int	i;

	i = 1;
	if (x < 0)
	{
		x *= -1;
		i++;
	}
	while (x / 10 > 0 && i++)
		x = x / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	long	nb;

	nb = n;
	len = ft_charc(nb);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	dest[len--] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb)
	{
		dest[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (dest);
}
