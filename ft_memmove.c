/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:10:04 by racamach          #+#    #+#             */
/*   Updated: 2024/10/22 19:04:49 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*src_ptr;
	unsigned char		*dest_ptr;

	src_ptr = (const unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	if (dest_ptr < src_ptr || src_ptr + count <= dest_ptr)
	{
		return (ft_memcpy(dest, src, count));
	}
	if (dest_ptr > src_ptr)
	{
		src_ptr += count;
		dest_ptr += count;
		while (count--)
		{
			*--dest_ptr = *--src_ptr;
		}
	}
	return (dest);
}
