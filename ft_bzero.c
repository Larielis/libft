/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:37:20 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:40:14 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first `n` bytes of the area 
 * starting at `s` to zero (bytes containing '\0').
 *
 * This function writes `n` zeroed bytes to the string `s`. If `n` is zero, 
 * ft_bzero() does nothing.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
