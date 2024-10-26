/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:56:14 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:08:22 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans the initial `n` bytes of the memory area pointed to by `s` for 
 * the first instance of `c`.
 *
 * This function scans the initial `n` bytes of the memory area pointed to 
 * by `s` for the first instance
 * of the character `c` (interpreted as an unsigned char). 
 * Both `s` and `c` are interpreted as unsigned char.
 *
 * @param s The memory area to be scanned.
 * @param c The character to be searched for.
 * @param n The number of bytes to be scanned.
 * @return A pointer to the matching byte, or 
 * `NULL` if the character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	size_t				i;

	i = 0;
	tmp = (const unsigned char *)s;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
		{
			return ((void *)tmp);
		}
		tmp++;
		i++;
	}
	return (NULL);
}
