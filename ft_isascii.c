/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:41:15 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:46:18 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an ASCII character.
 *
 * This function checks if the character `c` is an ASCII character.
 * ASCII characters have values ranging from 0 to 127 inclusive.
 *
 * @param c The character to be checked.
 * @return One if the character is an ASCII character, zero otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
