/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:00:54 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:40:51 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Computes the length of the string `s`.
 *
 * This function computes the length of the string `s`, 
 * excluding the terminating null byte (`\0`).
 *
 * @param s The string whose length is to be computed.
 * @return The number of characters in the string `s`.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
