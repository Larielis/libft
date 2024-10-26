/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:25:04 by racamach          #+#    #+#             */
/*   Updated: 2024/10/26 11:31:59 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Initializes the variables used in the ft_split function.
 *
 * This function sets the initial values of the variables used in the 
 * `ft_split` function.
 *
 * @param i Pointer to the size_t variable to be initialized.
 * @param j Pointer to the int variable to be initialized.
 * @param s_word Pointer to the int variable to be initialized.
 */
static void	ft_initiate_vars(size_t *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

/**
 * @brief Frees the allocated memory for the array of strings.
 *
 * This function frees the memory allocated for the array of strings 
 * and its elements.
 *
 * @param strs The array of strings to be freed.
 * @param count The number of strings in the array.
 * @return NULL.
 */
static void	*ft_free_strs(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

/**
 * @brief Allocates and fills a new string with a substring from 
 * the given string.
 *
 * This function allocates memory for a new string and fills it
 * with a substring
 * from the given string, starting at index `start` and ending at 
 * index `end`.
 *
 * @param str The original string.
 * @param start The starting index of the substring.
 * @param end The ending index of the substring.
 * @return A pointer to the newly allocated string, 
 * or `NULL` if memory allocation fails.
 */
static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

/**
 * @brief Counts the number of words in the given string, 
 * separated by the given delimiter.
 *
 * This function counts the number of words in the given string `str`, 
 * where words are separated by the character `c`.
 *
 * @param str The string to be analyzed.
 * @param c The delimiter character.
 * @return The number of words in the string.
 */
static int	ft_word_count(const char *str, char c)
{
	int	count;
	int	is_in_word;

	count = 0;
	is_in_word = 0;
	while (*str)
	{
		if (*str != c && is_in_word == 0)
		{
			is_in_word = 1;
			count++;
		}
		else if (*str == c)
			is_in_word = 0;
		str++;
	}
	return (count);
}

/**
 * @brief Splits the given string into an array of strings, 
 * using the given delimiter.
 *
 * This function splits the string `s` into an array of strings, 
 * using the character `c` as the delimiter. 
 * The resulting array is dynamically allocated and should be freed
 * by the caller.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return A pointer to the array of strings, 
 * or `NULL` if memory allocation fails.
 */
char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		s_word;

	ft_initiate_vars(&i, &j, &s_word);
	res = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			res[j] = ft_fill_word(s, s_word, i);
			if (!(res[j]))
				return (ft_free_strs(res, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}
