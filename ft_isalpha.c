/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:18:58 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:46:31 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an alphabetic letter.
 *
 * This function checks if the character `c` is 
 * an alphabetic letter (either lowercase or uppercase).
 *
 * @param c The character to be checked.
 * @return One if the character is an alphabetic letter, zero otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
