/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:31:18 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:44:58 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares up to `n` characters of the strings `s1` and `s2`.
 *
 * This function compares up to `n` characters of the strings `s1` and `s2`.
 * The comparison is done using unsigned characters. 
 * The function returns an integer less than, equal to, 
 * or greater than zero if `s1` is found, respectively, to be less than,
 * to match, or be greater than `s2`.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than 0 if the first differing byte in `s1` is 
 * less than the corresponding byte in `s2`, 
 * greater than 0 if the first differing byte in `s1` is 
 * greater than the corresponding byte in `s2`, 
 * and 0 if the memory areas are equal.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
