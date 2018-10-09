/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:45:18 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/08 18:24:58 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
    if (*str)
    {
        ft_putchar(*str++);
        ft_putstr(str);
    }
}

int		main(int ac, char **av)
{
    *av++;
    while (ac && *av)
    {
        ft_putstr(*av++);
		ft_putchar('\n');
    }
    return (0);
}
