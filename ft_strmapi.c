/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:53:53 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:42:39 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function `f` to each character of the 
 * string `s` to create a new string.
 *
 * This function allocates memory for a new string, 
 * which is the result of applying the function `f`
 * to each character of the string `s`. 
 * The function `f` is called with the index of each character
 * and the character itself. If `s` or `f` is `NULL`, 
 * the function returns `NULL`. The memory for the new
 * string is obtained with `malloc`, and can be freed with `free`.
 *
 * @param s The input string.
 * @param f The function to apply to each character of `s`.
 * @return A pointer to the newly allocated string, 
 * or `NULL` if memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
