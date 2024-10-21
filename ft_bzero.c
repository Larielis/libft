/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:37:20 by racamach          #+#    #+#             */
/*   Updated: 2024/10/17 22:11:36 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first n bytes of the area starting at
 * s to zero (bytes containing '\0').
 *
 * This function writes n zero bytes to the string s.
 * If n is zero, ft_bzero() does nothing.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char str[6] = "Hello";
	size_t n_zero = 6;
	printf("Before ft_bzero: \n");
	for (size_t i = 0; i < 6; i++)
	{
		printf("%02x ", str[i]);
	}
	ft_bzero(str, n_zero);
	printf("\n");
	printf("After ft_bzero: \n");
	for (size_t i = 0; i < 6; i++)
	{
		printf("%02x ", str[i]);
	}
	return 0;
}
*/