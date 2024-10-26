/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:10:04 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:25:05 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies `count` bytes from memory area `src` to memory area `dest`.
 *
 * This function copies `count` bytes from the memory area `src` to the 
 * memory area `dest`.
 * The memory areas may overlap. If they do, the copying is done in a way 
 * that ensures
 * the original data in `src` 
 * is not overwritten before it is copied to `dest`.
 * If `dest` is before `src`, the copying is done 
 * from the beginning to the end.
 * If `dest` is after `src`, the copying is done 
 * from the end to the beginning.
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param count The number of bytes to copy.
 * @return A pointer to `dest`.
 */
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
