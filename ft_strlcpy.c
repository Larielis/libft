/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:51:43 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:40:23 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/**
 * @brief Copies up to `size - 1` characters from the string `src` to `dst`, 
 * null-terminating the result.
 *
 * This function copies up to `size - 1` characters 
 * from the string `src` to `dst`, ensuring that the result
 * is null-terminated. If `size` is 0, `dst` is not modified. 
 * The function returns the total length of the string
 * it tried to create, i.e., the length of `src`.
 *
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create, i.e., 
 * the length of `src`.
 */
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
