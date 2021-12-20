/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:47:01 by ccamie            #+#    #+#             */
/*   Updated: 2021/12/15 20:47:02 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# define STRING "Marina"

int	ft_printf(const char *s, ...);

int	main(void)
{

	   printf("\n	width	%s\n\n", STRING);

	   printf("		%2d %2d\n",
	   printf("   printf|%s|\n", STRING)-12,
	ft_printf("ft_printf|%s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%1s|\n", STRING)-12,
	ft_printf("ft_printf|%1s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%2s|\n", STRING)-12,
	ft_printf("ft_printf|%2s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%3s|\n", STRING)-12,
	ft_printf("ft_printf|%3s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%4s|\n", STRING)-12,
	ft_printf("ft_printf|%4s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%5s|\n", STRING)-12,
	ft_printf("ft_printf|%5s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%6s|\n", STRING)-12,
	ft_printf("ft_printf|%6s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%7s|\n", STRING)-12,
	ft_printf("ft_printf|%7s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%8s|\n", STRING)-12,
	ft_printf("ft_printf|%8s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%9s|\n", STRING)-12,
	ft_printf("ft_printf|%9s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10s|\n", STRING)-12,
	ft_printf("ft_printf|%10s|", STRING)-11);



	   printf("\n	precision	%s\n\n", STRING);



	   printf("		%2d %2d\n",
	   printf("   printf|%.s|\n", STRING)-12,
	ft_printf("ft_printf|%.s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.0s|\n", STRING)-12,
	ft_printf("ft_printf|%.0s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.1s|\n", STRING)-12,
	ft_printf("ft_printf|%.1s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.2s|\n", STRING)-12,
	ft_printf("ft_printf|%.2s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.3s|\n", STRING)-12,
	ft_printf("ft_printf|%.3s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.4s|\n", STRING)-12,
	ft_printf("ft_printf|%.4s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.5s|\n", STRING)-12,
	ft_printf("ft_printf|%.5s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.6s|\n", STRING)-12,
	ft_printf("ft_printf|%.6s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.7s|\n", STRING)-12,
	ft_printf("ft_printf|%.7s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.8s|\n", STRING)-12,
	ft_printf("ft_printf|%.8s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.9s|\n", STRING)-12,
	ft_printf("ft_printf|%.9s|", STRING)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%.10s|\n", STRING)-12,
	ft_printf("ft_printf|%.10s|", STRING)-11);



	   printf("\n	width and precision	%s\n\n", STRING);



	   printf("		%2d %2d\n",
	   printf("   printf|%10.s|\n", STRING)-12,
	ft_printf("ft_printf|%10.s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.0s|\n", STRING)-12,
	ft_printf("ft_printf|%10.0s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.1s|\n", STRING)-12,
	ft_printf("ft_printf|%10.1s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.2s|\n", STRING)-12,
	ft_printf("ft_printf|%10.2s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.3s|\n", STRING)-12,
	ft_printf("ft_printf|%10.3s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.4s|\n", STRING)-12,
	ft_printf("ft_printf|%10.4s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.5s|\n", STRING)-12,
	ft_printf("ft_printf|%10.5s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.6s|\n", STRING)-12,
	ft_printf("ft_printf|%10.6s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.7s|\n", STRING)-12,
	ft_printf("ft_printf|%10.7s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.8s|\n", STRING)-12,
	ft_printf("ft_printf|%10.8s|", STRING)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.9s|\n", STRING)-12,
	ft_printf("ft_printf|%10.9s|", STRING)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10.10s|\n", STRING)-12,
	ft_printf("ft_printf|%10.10s|", STRING)-11);
}

