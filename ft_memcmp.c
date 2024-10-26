/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:03 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:11:36 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares the first `n` bytes of the memory areas `s1` and `s2`.
 *
 * This function compares the first `n` bytes of the memory areas 
 * `s1` and `s2`.
 * The comparison is done byte by byte. If the two memory areas are equal, 
 * the function returns 0.
 * If they are not equal, the function returns the difference between the 
 * first two differing bytes.
 *
 * @param s1 The first memory area to be compared.
 * @param s2 The second memory area to be compared.
 * @param n The number of bytes to be compared.
 * @return An integer less than 0 if the first differing byte in `s1` is 
 * less than the corresponding byte in `s2`, 
 * greater than 0 if the first differing byte in `s1` is 
 * greater than the corresponding byte in `s2`, 
 * and 0 if the memory areas are equal.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
		{
			return (tmp1[i] - tmp2[i]);
		}
		i++;
	}
	return (0);
}
