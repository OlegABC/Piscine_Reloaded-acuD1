/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:57:01 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/05 18:31:10 by arsciand         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ? ft_strcmp(s1 + 1, s2 + 1) : *s1 - *s2);
}

void	do_swap(char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (av[i] && av[0])
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0)
		{
			tmp = av[i - 1];
			av[i - 1] = av[i];
			av[i] = tmp;
			i = 0;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		do_swap(av);
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
