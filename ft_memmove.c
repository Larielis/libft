/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:10:04 by racamach          #+#    #+#             */
/*   Updated: 2024/09/20 16:28:59 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*s;
	unsigned char		*tmp;

	if (dest < src || src + count <= dest)
	{
		return (ft_memcpy(dest, src, count));
	}
	if (dest > src)
	{
		s = src + count;
		tmp = dest + count;
		while (count--)
			*--tmp = *--s;
	}
	return (dest);
}
