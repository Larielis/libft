/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:13:04 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 10:38:55 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts the initial portion of the string pointed to by `nptr` to int.
 *
 * This function parses the string `nptr`, which is returned as an int value
 * The function discards any whitespace characters until the first non-whitespace
 * character is found. Then, starting from this character, takes an optional 
 * initial plus or minus sign followed by as many base-10 digits as possible,
 * and interprets them as a numerical value.
 *
 * @param nptr Pointer to the null-terminated string to be interpreted.
 * @return The converted integral number as an int. 
 *         If no valid conversion could be performed, it returns zero.
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
