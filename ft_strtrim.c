/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:07:07 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:48:29 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims the characters in `set` 
 * from the beginning and end of the string `s1`.
 *
 * This function removes all characters in `set` 
 * from the beginning and end of the string `s1`.
 * The resulting string is dynamically allocated 
 * and should be freed by the caller.
 * If `s1` or `set` is `NULL`, the function returns `NULL`.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed 
 * from the beginning and end of `s1`.
 * @return A pointer to the newly allocated trimmed string, 
 * or `NULL` if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	return (ft_substr(s1, 0, i));
}
