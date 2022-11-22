/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:44:04 by juhyulee          #+#    #+#             */
/*   Updated: 2022/11/11 17:25:23 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	cnt;

	j = 0;
	cnt = -1;
	if (to_find[j] == '\0')
		return (str);
	while (*str)
	{
		if (*str == to_find[j])
		{
			j++;
			cnt++;
			if (to_find[j] == '\0')
				return (str - cnt);
		}
		str++;
		if (*str != to_find[j])
		{
			j = 0;
			cnt = -1;
		}
	}
	return (0);
}
