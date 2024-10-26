/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:09:52 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:51:07 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a substring from the string `s`.
 *
 * This function allocates memory for a substring from the string `s`, 
 * starting at index `start` and of maximum length `len`. If `s` is `NULL`, 
 * the function returns `NULL`. If `start` is greater
 * than the length of `s`, the function returns an empty string. 
 * The memory for the new string is obtained with `malloc`, 
 * and can be freed with `free`.
 *
 * @param s The input string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * @return A pointer to the newly allocated substring, 
 * or `NULL` if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
