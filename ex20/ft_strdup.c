/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:36:21 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/05 18:47:08 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	return (*str ? ft_strlen(++str) + 1 : 0);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	if (!(dst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
