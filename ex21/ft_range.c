/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:05:16 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/08 19:51:31 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *tab;
    int i;

    i = 0;
    if (!(tab = malloc(sizeof(int) * (max - min))) || min >= max)
        return (NULL);
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}
