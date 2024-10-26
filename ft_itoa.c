/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:48:08 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:49:35 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

/**
 * @brief Calculates the length of the string representation of an integer.
 *
 * This function calculates the number of characters needed to represent 
 * the integer `n` as a string,
 * including the sign if the number is negative.
 *
 * @param n The integer whose length is to be calculated.
 * @return The length of the string representation of the integer.
 */
static int	ft_num_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

/**
 * @brief Converts an integer to a null-terminated string.
 *
 * This function converts the integer `n` to a string representation and 
 * returns a pointer to the string.
 * The string is dynamically allocated and should be freed by the caller.
 *
 * @param n The integer to be converted.
 * @return A pointer to the string representation of the integer, 
 * or NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
