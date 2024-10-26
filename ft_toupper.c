/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:16:38 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:52:24 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 *
 * This function converts the given character `c` 
 * to its uppercase equivalent if it is a lowercase letter.
 * If `c` is not a lowercase letter, it is returned unchanged.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent of `c` if it is a lowercase letter, 
 * otherwise `c` unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= ('a' - 'A');
	}
	return (c);
}
