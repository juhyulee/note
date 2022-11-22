/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:02 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 22:21:51 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strslen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

char	*strtotal(char **strs, char *arr, int totalsize, char *sep)
{
	while (*strs)
	{
		arr = ft_strcat(arr,*strs);
		strs++;
		if (*arr != totalsize - 1)
		{
			ft_strcat(arr, sep);
			arr++;
		}
	}
	*arr = 0;
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totalsize;
	char	*new_arr;
	int		i;

	i = 0;
	if (size == 0)
	{
		new_arr = (char *)malloc(1);
		new_arr[0] = 0;
		return (new_arr);
	}	
	while (strs[i])
	{
		totalsize += strslen(*strs);
		i++;
	}
	totalsize += (size - 1) * strslen(sep);
	new_arr = (char *)malloc(sizeof(char) * (totalsize + 1));
	if (!(new_arr))
		return (0);
	new_arr[0] = 0;
	new_arr = strtotal(strs, new_arr, totalsize, sep);
	return (new_arr);
}
