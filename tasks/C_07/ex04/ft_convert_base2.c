/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyulee <juhyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:50:48 by juhyulee          #+#    #+#             */
/*   Updated: 2022/09/10 22:17:58 by juhyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (baselen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	nbrcheck(char *nbr)
{
	int	sign;

	sign = 1;
	while (*nbr)
	{
		if ((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
			nbr++;
		else
			break ;
	}
	while (*nbr)
	{
		if (*nbr == '+')
			nbr++;
		else if (*nbr == '-')
		{
			sign *= -1;
			nbr++;
		}
		else
			break ;
	}
	return (sign);
}
