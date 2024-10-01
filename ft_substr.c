/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:09:52 by racamach          #+#    #+#             */
/*   Updated: 2024/10/01 19:35:55 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with `malloc`) and returns a substring from the string `s`.
/// @param s: The substring begins at index `start` and is of maximum size `len`.
/// @param start: The start index of the substring in the string `s`.
/// @param len: The maximum length of the substring.
/// @return The substring, or `NULL` if the allocation fails
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	if (len > ft_strlen(s))
	{
		return (NULL);
	}
	substr = (char *) malloc(len * sizeof(char));
	
}