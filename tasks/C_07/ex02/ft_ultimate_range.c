/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:27:08 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 22:15:31 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	len;
	int			i;
	int			*arr;

	len = max - min;
	i = 0;
	if (*range == 0)
		return (-1);
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * len);
	if (*arr == 0)
		return (-1);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
