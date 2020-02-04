/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:05:38 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/18 15:43:02 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		s;
	int		i;
	char	*dest;

	s = 0;
	i = 0;
	while (src[s] != '\0')
		s++;
	dest = (char *)malloc(sizeof(*dest) * s + 1);
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
