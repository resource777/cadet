/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 14:56:22 by jaewonki          #+#    #+#             */
/*   Updated: 2021/12/31 14:56:22 by jaewonki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		++i;
		++dst;
	}
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		++dst;
		++src;
		++i;
	}
	if (i < dstsize)
		*dst = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}
