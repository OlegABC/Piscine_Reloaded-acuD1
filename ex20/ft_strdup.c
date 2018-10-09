/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:51:51 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/08 19:04:56 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    return (*str ? ft_strlen(++str) + 1 : 0);
}

char    *ft_strdup(char *src)
{
    char    *dst;
    int     size;
    int     i;

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
