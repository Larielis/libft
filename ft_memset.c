/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:34:26 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:26:05 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first `n` bytes of the memory area pointed to by 
 * `s` with the constant byte `c`.
 *
 * This function sets the first `n` bytes of the memory area pointed to by 
 * `s` to the value `c` (interpreted as an unsigned char).
 *
 * @param s The memory area to be filled.
 * @param c The byte value to fill the memory area with.
 * @param n The number of bytes to be set to the value `c`.
 * @return A pointer to the memory area `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*tmp = (unsigned char)c;
		i++;
		tmp++;
	}
	return (s);
}
