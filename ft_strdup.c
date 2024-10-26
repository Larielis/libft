/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:24:46 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:35:02 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates the given string `s1`.
 *
 * This function allocates sufficient memory for a copy of the string `s1`, 
 * does the copy, and returns a pointer to it. 
 * The memory for the new string is obtained with `malloc`,
 * and can be freed with `free`.
 *
 * @param s1 The string to be duplicated.
 * @return A pointer to the duplicated string, 
 * or `NULL` if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(s1) + 1;
	duplicate = (char *)malloc(len * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s1, len);
	return (duplicate);
}
