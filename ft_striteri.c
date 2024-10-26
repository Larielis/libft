/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:01:06 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:36:36 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function `f` to each character of the string `s`, 
 * passing its index as the first argument.
 *
 * This function iterates over the string `s` 
 * and applies the function `f` to each character,
 * passing the character's index as the first argument to `f`. 
 * If `s` or `f` is `NULL`, the function does nothing.
 *
 * @param s The string to be iterated over.
 * @param f The function to be applied to each character of `s`.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
