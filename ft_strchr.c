/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:03:06 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:33:58 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Locates the first occurrence of `c` (converted to a char) 
 * in the string pointed to by `s`.
 *
 * This function scans the string pointed to by `s` 
 * for the first occurrence of the character `c`.
 * The terminating null byte is considered part of the string, 
 * so that if `c` is `\0`, the function
 * will return a pointer to the terminator.
 *
 * @param s The string to be scanned.
 * @param c The character to be located.
 * @return A pointer to the first occurrence of `c` in the string, 
 * or NULL if `c` is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
