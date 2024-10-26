/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:15:37 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:37:37 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a new string, which is the result 
 * of the concatenation of `s1` and `s2`.
 *
 * This function allocates memory for a new string, 
 * which is the result of the concatenation of `s1` and `s2`.
 * If either `s1` or `s2` is `NULL`, the function returns NULL. 
 * The memory for the new string is obtained with `malloc`,
 * and can be freed with `free`.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return A pointer to the newly allocated string, 
 * or `NULL` if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[i] = '\0';
	return (result);
}
