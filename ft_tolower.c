/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:40:32 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:51:42 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an uppercase letter to its lowercase equivalent.
 *
 * This function converts the given character `c` to 
 * its lowercase equivalent if it is an uppercase letter.
 * If `c` is not an uppercase letter, it is returned unchanged.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of `c` if it is an uppercase letter, 
 * otherwise `c` unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += ('a' - 'A');
	}
	return (c);
}
