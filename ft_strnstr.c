/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:31:32 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:46:14 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated 
 * string `little` in the string `big`,
 * where not more than `len` characters are searched.
 *
 * This function locates the first occurrence of the null-terminated 
 * string `little` in the string `big`,
 * where not more than `len` characters are searched. 
 * Characters that appear after a `\0` character are not searched.
 * If `little` is an empty string, `big` is returned,
 * if `little` occurs nowhere in `big`, NULL is returned.
 *
 * @param big The string to be searched.
 * @param little The substring to be located.
 * @param len The maximum number of characters to be searched.
 * @return A pointer to the first occurrence of `little` in `big`, 
 * or `NULL` if `little` is not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
