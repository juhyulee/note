/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:50:35 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 21:10:58 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
