/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:00:02 by jaewonki          #+#    #+#             */
/*   Updated: 2021/12/31 15:00:02 by jaewonki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	ret;
	int		sign;

	ret = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		++str;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str++ - '0');
		if (ret < 0)
			return ((sign + 1) / -2);
	}
	return (sign * ret);
}
