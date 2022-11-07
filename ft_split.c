/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:00:03 by gramos-d          #+#    #+#             */
/*   Updated: 2022/10/28 17:00:03 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wc(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[++i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	x;
	size_t	y;
	int		j;
	char	**split;

	x = 0;
	j = 0;
	if (!s)
		return (0);
	split = malloc(sizeof (char *) * (ft_wc((char *)s, c) + 1));
	if (!split)
		return (0);
	while (j < ft_wc((char *)s, c))
	{
		while (s[x] == c && s[x])
			x++;
		y = x;
		while (s[y] != c && s[y])
			y++;
		split[j++] = ft_substr(s, x, y - x);
		x = y;
	}
	split[j] = 0;
	return (split);
}
