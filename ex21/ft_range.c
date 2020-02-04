/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:32:57 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/18 16:49:30 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *r;
	int i;

	if (min >= max)
		return (NULL);
	r = (int*)malloc((max - min) * sizeof(int));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}
