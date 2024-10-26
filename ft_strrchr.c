/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:15:07 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:47:38 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of `c` (converted to a char) 
 * in the string pointed to by `s`.
 *
 * This function scans the string pointed to 
 * by `s` for the last occurrence of the character `c`.
 * The terminating null byte is considered part of the string, 
 * so that if `c` is `\0`, the function
 * will return a pointer to the terminator.
 *
 * @param s The string to be scanned.
 * @param c The character to be located.
 * @return A pointer to the last occurrence of `c` in the string, 
 * or `NULL` if `c` is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (const char)c)
		{
			last = s;
		}
		s++;
	}
	if (*s == (const char)c)
	{
		last = s;
	}
	return ((char *)last);
}
