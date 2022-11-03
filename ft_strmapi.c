/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:53:20 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/31 15:53:20 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fr;
	int		i;

	i = -1;
	if (!s)
		return (0);
	if (!(fr = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[++i])
		fr[i] = (*f)(i, s[i]);
	fr[i] = 0;
	return (fr);
}