/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:01:42 by jaewonki          #+#    #+#             */
/*   Updated: 2021/12/31 15:01:42 by jaewonki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tmp_len;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	tmp_len = ft_strlen(s + start);
	if (tmp_len < len)
		len = tmp_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
