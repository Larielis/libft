/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:51:43 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 18:23:56 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;
	size_t		src_len;
	size_t		copy_len;

	s = src;
	src_len = ft_strlen(s);
	if (size != 0)
	{
		if (src_len >= size)
		{
			copy_len = size - 1;
		}
		else
		{
			copy_len = src_len;
		}
		ft_memcpy(dst, s, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
