/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:11:09 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/16 15:13:33 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	disp(char *str)
{
	int		file;
	char	ch;

	file = open(str, O_RDONLY);
	if (file == -1)
		return ;
	while (read(file, &ch, 1))
		write(1, &ch, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
		disp(argv[1]);
	return (0);
}
