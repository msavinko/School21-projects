/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:12:38 by marlean           #+#    #+#             */
/*   Updated: 2021/10/18 17:40:16 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	// size_t	i;
	// size_t	j;

	// i = 0;
	// j = 0;
	if (*needle == 0)
		return ((char *)haystack);

	while (len)
	{
		if (*haystack == 0 || ft_strlen(needle) > len--)
			return (0);
		if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
			return ((char *)haystack);
		haystack++;
	}
	// if (ft_strlen(needle) > ft_strlen(haystack) || len <= ft_strlen(needle))
	// 	return (0);
	// while (*haystack)
	// {
	// 	if (*haystack == *needle)
	// 	{
	// 		if (!ft_strncmp(haystack, needle, len))
	// 			return ((char *)haystack);
	// 	} 
	// 	haystack++;
	// }
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "see FF your FF return FF now FF";
// 	char *s2 = "FF";
// 	char *s3 = "see FF your FF return FF now FF";
// 	char *s4 = "FF";

// 	printf("result %s\n original %s", ft_strnstr(s1, s2, 2), strnstr(s3, s4, 2));
// 	return (0);
// }