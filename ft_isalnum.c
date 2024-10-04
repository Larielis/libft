/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:27:59 by racamach          #+#    #+#             */
/*   Updated: 2024/10/04 22:01:18 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory and initializes it to zero.
 *
 * The ft_calloc() function allocates memory for an array of `nmemb` elements 
 * of `size` bytes each and returns a pointer to the allocated memory. 
 * The memory is set to zero. 
 * If `nmemb` or `size` is 0, ft_calloc() returns NULL.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element.
 * @return A pointer to the allocated memory, which is suitably aligned for any 
 * kind of variable. On error, or if `nmemb` or `size` is 0, NULL is returned.
 *
 * @note This function checks for overflow when calculating the total size of 
 * the memory to allocate. It relies on ft_bzero() to set the memory to zero.
 * @warning The behavior is undefined if the multiplication of `nmemb` and 
 * `size` would result in overflow.
 *
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
