/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:34:07 by marlean           #+#    #+#             */
/*   Updated: 2021/10/22 19:45:51 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_words(char const *s, char c)
{
	size_t i;
	size_t	words;
	
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
//			printf("i = %zu\n", i);
			words++;
		}
		else if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
		}
	}
//	printf("kol-vo slov = %zu\n", words);
	return (words);
}
int	ft_count_symb(char const *s, int i, char c)
{
	size_t	size;

	size = 0;
	while(s[i++] != c)
		size++;
	return (size);
}
void	ft_emptymall(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}
char	**ft_split(char const *s, char c)
{
	size_t 	i;
	size_t		words;
	char	**result;
	size_t		len;
	size_t 	j;
	
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	words = ft_count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
//	printf("%zu\n", words + 1);
	if (!result)
		return (NULL);
	while (s[i] && j < words)
	{
//		printf("1\n");
		while (s[i] == c && s[i])
			i++;
//		printf("2\n");
		if (s[i] != c && s[i])
		{
//			printf("3\n");
			len = ft_count_symb(s, i, c);
//			printf("4\n");
//			printf("%zu\n", len);
			result[j] = ft_substr(s, i, len);
//			printf("%s\n", result[j]);
			if (!result[j])
			{
				ft_emptymall(result, j);
				return (NULL);
			}
			i = i + len;
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

// int main(void)
// {
// 	char **test;
// 	int	i;

// 	i = 0;
// 	test = ft_split("      split       this for   me  !", ' ');
// 	while (i < 6)
// 	{
// 		printf("%s\n", test[i]);
// 		i++;
// 	}
// 	return (0);	
// }