/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:10:04 by racamach          #+#    #+#             */
/*   Updated: 2024/09/25 22:06:23 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*s;
	unsigned char		*tmp;

	if (!dest || !src)
		return (NULL);
	s = (const unsigned char *)src;
	tmp = (unsigned char *)dest;
	if (tmp < s || s + count <= tmp)
	{
		return (ft_memcpy(dest, src, count));
	}
	if (dest > src)
	{
		s = src + count;
		tmp = dest + count;
		while (count--)
		{
			*--tmp = *--s;
		}
	}
	return (dest);
}
