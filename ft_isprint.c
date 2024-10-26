/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:48:41 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:47:55 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is printable.
 *
 * This function checks if the character `c` is a printable character,
 * including space. Printable characters have values ranging 
 * from 32 (space) to 126 (tilde).
 *
 * @param c The character to be checked.
 * @return One if the character is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
