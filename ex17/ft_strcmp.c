/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:58 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/18 15:33:20 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
		{
			result = 1;
			break ;
		}
		if (s1[i] < s2[i])
		{
			result = -1;
			break ;
		}
		i++;
	}
	return (result);
}
