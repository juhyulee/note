/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:22:53 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 22:20:37 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**totalize(char *str, char *charset, char **split)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				split[k] = (char *)malloc(sizeof(char) * (i + 1));
				k++;
				i++;
				continue ;
			}
			j++;
		}
		i++;
	}
	return (split);
}

char	**capitalize(char *str, char *charset, char **split)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				split[k][i] = 0;
				k++;
				i++;
				continue ;
			}
			split[k][i] = str[i];
			j++;
		}
		i++;
	}
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;

	split = totalize(str, charset, split);
	split = capitalize(str, charset, split);
	return (split);
}
