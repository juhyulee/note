/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:27:08 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 22:40:38 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	*range = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * len);
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}
