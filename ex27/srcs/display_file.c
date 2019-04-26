/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:53:28 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/26 08:44:14 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

/*
   size_t	ft_strlen(char const *s)
   {
   return (*s ? ft_strlen(++s) + 1 : 0);
   }

   void	ft_putstr(char const *s)
   {
   write(1, s, ft_strlen(s));
   }

   void	do_read(char *av)
   {
   int		fd;
   ssize_t	ret;
   char	buff;

   fd = open(av, O_RDONLY);
   if (fd == -1)
   return ;
   ret = 1;
   while (ret)
   {
   if ((ret = read(fd, &buff, 1) == -1))
   break;	
   write(1, &buff, 1);
   }
   close(fd);
   }

   int		main(int ac, char **av)
   {
   if (ac < 2)
   ft_putstr("File name missing.\n");
   else if (ac > 2)
   ft_putstr("Too many arguments.\n");
   else
   do_read(av[1]);
   return (0);
   }
   */

int		main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
