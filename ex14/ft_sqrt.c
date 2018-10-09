/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:39:57 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/03 20:31:42 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_sqrt(int nb)
{
	int rt;

	rt = 0;
	if (nb > 0 && nb < INT_MAX)
	{
		while (rt * rt < nb)
			rt++;
		if (rt * rt == nb)
			return (rt);
		else
			return (0);
	}
	else
		return (0);
}
