/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:37:20 by racamach          #+#    #+#             */
/*   Updated: 2024/10/04 21:54:34 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Zeroes a byte string.
 *
 * The ft_bzero() function writes `n` zeroed bytes to the string s. 
 * If `n` is zero, `ft_bzero` does nothing.
 *
 * @param s Pointer to the block of memory to fill.
 * @param n Number of bytes to be set to zero.
 * @return None.
 *
 * @note This function relies on ft_memset() to perform the actual 
 * memory setting.
 * @warning The behavior is undefined if `n` exceeds the size of the 
 * memory block pointed to by `s`.
 *
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
