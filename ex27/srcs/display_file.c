/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:15:07 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/10 19:10:48 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

size_t  ft_strlen(char const *s)
{
    return (*s ? ft_strlen(++s) + 1 : 0);
}

void    ft_putstr(char const *s)
{
    write(1, s, ft_strlen(s));
}

void    do_read(char *av)
{
    int i;
    int fd;
    char buff[4096];

    i = 0;
    while (i < 4096)
        buff[i++] = '\0';
    fd = open(av, O_RDONLY);
    if (fd != -1)
        while (read(fd, buff, 4096))
            ft_putstr(buff);
    else
        return;
    close(fd);
}

int     main(int ac, char **av)
{
    if (ac < 2)
        ft_putstr("File name missing.\n");
    else if (ac > 2)
        ft_putstr("Too many arguments.\n");
    else
        do_read(av[1]);
    return 0;
}
