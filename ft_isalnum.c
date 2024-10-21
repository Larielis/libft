/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:27:59 by racamach          #+#    #+#             */
/*   Updated: 2024/10/12 11:26:44 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * This function checks if the character passed as an argument is either
 * an alphabetic letter (a-z, A-Z) or a digit (0-9).
 *
 * @param c The character to be checked.
 * @return Non-zero value if the character is alphanumeric, zero otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int main()
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		if(ft_isalnum(i))
		{
			printf("%c is alphanumeric \n", i);
		}		
		else
		{
			printf("%c is not alphanumeric \n", i);
		}
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if(ft_isalnum(i))
		{
			printf("%c is alphanumeric \n", i);
		}
		else
		{
			printf("%c is not alphanumeric \n", i);
		}
	}

	for (char i = '0'; i <= '9'; i++)
	{
		if(ft_isalnum(i))
		{
			printf("%c is alphanumeric \n", i);
		}
		else
		{
			printf("%c is not alphanumeric \n", i);
		}
	}

	for (char i = 0; i <= 47; i++)
	{
		if(!ft_isalnum(i))
		{
			printf("%c is not alphanumeric \n", i);
		}
		else
		{
			printf("%c is alphanumeric \n", i);
		}
	}

	for (char i = 58; i <= 64; i++)
	{
		if(!ft_isalnum(i))
		{
			printf("%c is not alphanumeric \n", i);
		}
		else
		{
			printf("%c is alphanumeric \n", i);
		}
	}

	for (char i = 91; i <= 96; i++)
	{
		if(!ft_isalnum(i))
		{
			printf("%c is not alphanumeric \n", i);
		}
		else
		{
			printf("%c is alphanumeric \n", i);
		}
	}

	for (int i = 123; i <= 127; i++)
	{
		if(!ft_isalnum(i))
		{
			printf("%c is not alphanumeric \n", i);
		}
		else
		{
			printf("%c is alphanumeric \n", i);
		}
	}
	return 0;
}
