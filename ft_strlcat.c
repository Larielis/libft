/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:05:28 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:41:31 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates the string `src` to the end of `dest` of size `n`.
 *
 * This function appends the `src` string to the end of `dest` string, 
 * ensuring that the total length
 * of the resulting string in `dest` does not exceed `n` bytes, 
 * including the `\0` terminator.
 * It returns the total length of the string it tried to create, 
 * i.e., the initial length of `dest` plus the length of `src`.
 *
 * @param dest The destination string to which `src` is appended.
 * @param src The source string to be appended to `dest`.
 * @param n The total size of the destination buffer.
 * @return The total length of the string it tried to create, i.e., 
 * the initial length of `dest` plus the length of `src`.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dsize;
	size_t	ssize;
	size_t	res;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	res = dsize + ssize;
	if (n == 0)
		return (ssize);
	if (dsize >= n)
		return (ssize + n);
	dest += dsize;
	n -= dsize;
	if (ssize >= n)
		ssize = n - 1;
	ft_memcpy(dest, src, ssize);
	dest[ssize] = '\0';
	return (res);
}
