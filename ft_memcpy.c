/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:39 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:13:10 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies `n` bytes from memory area `src` to memory area `dest`.
 *
 * This function copies `n` bytes from the memory area `src` 
 * to the memory area `dest`.
 * The memory areas must not overlap. 
 * Recommended the use of `ft_memmove` if the memory areas do overlap.
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to `dest`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
