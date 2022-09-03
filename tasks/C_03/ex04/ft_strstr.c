/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:44:04 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/01 20:22:45 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = -1;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			cnt++;
			if (to_find[j] == '\0')
				return (&str[i - cnt]);
		}
		i++;
		if (str[i] != to_find[j])
		{
			j = 0;
			cnt = -1;
		}
	}
	return (0);
}
