/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 14:55:46 by jaewonki          #+#    #+#             */
/*   Updated: 2021/12/31 14:55:46 by jaewonki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*t1 != *t2 || !*t1 || !*t2)
			return (*t1 - *t2);
		++t1;
		++t2;
	}
	return (0);
}
