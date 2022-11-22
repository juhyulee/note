/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:15:45 by juhyulee          #+#    #+#             */
/*   Updated: 2022/11/10 20:06:15 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = ft_len(src);
	dest_size = ft_len(dest);
	i = 0;
	if (size < dest_size + 1)
		return (src_size + size);
	while (i + dest_size + 1 < size)
	{	
		if (src[i] == '\0')
			break ;
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
