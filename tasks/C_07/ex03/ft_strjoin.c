/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:02 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/11 14:23:51 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strslen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (temp);
}

char	*strtotal(char **strs, char *arr, int size, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i > 0)
			arr = ft_strcat(arr, sep);
		arr = ft_strcat(arr, strs[i]);
		i++;
	}
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totalsize;
	char	*new_arr;
	int		i;

	if (size == 0)
	{
		new_arr = (char *)malloc(1);
		new_arr[0] = 0;
		return (new_arr);
	}
	i = 0;
	totalsize = 0;
	while (strs[i] && i < size)
	{
		totalsize += strslen(strs[i]);
		i++;
	}
	totalsize += (size - 1) * strslen(sep);
	new_arr = (char *)malloc(sizeof(char) * (totalsize + 1));
	if (!(new_arr))
		return (0);
	new_arr[0] = 0;
	new_arr = strtotal(strs, new_arr, size, sep);
	return (new_arr);
}
