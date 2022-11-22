/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:26:54 by juhyulee          #+#    #+#             */
/*   Updated: 2022/11/16 14:13:21 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	i = 0;
	news = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (news == 0)
		return (0);
	while (i < len1)
		news[i++] = *s1++;
	while (i < (len1 + len2))
		news[i++] = *s2++;
	news[i] = 0;
	return (news);
}
