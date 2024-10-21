/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:13:04 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 11:26:52 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed to by nptr
 * to int representation. It skips any whitespace characters, handles an optional
 * sign, and processes numeric digits until a non-digit character is encountered.
 *
 * @param nptr Pointer to the null-terminated string to be converted.
 * @return The converted integer value.
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

/*
#include "libft.h"
int main()
{
	char* number = "21474836488654";

	int ft_atoi_number = ft_atoi(number);
	int atoi_number = atoi(number);

	printf("ft_atoi(%s) :  %d", number, ft_atoi_number);
	printf("\n");
	printf("atoi(%s) :  %d", number, atoi_number);
	printf("\n");

	if (ft_atoi_number == atoi_number)
	{
		printf("atoi and ft_atoi are equal \n");
	}
	else
	{
		printf("atoi and ft_atoi are NOT equal \n");
	}
	return (0);
}
*/
