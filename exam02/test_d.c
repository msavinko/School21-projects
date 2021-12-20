/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:47:01 by ccamie            #+#    #+#             */
/*   Updated: 2021/12/20 20:57:34 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# define NUMBER 12345

int	ft_printf(const char *s, ...);

int	main(void)
{

	   printf("\n	width	%d\n\n", NUMBER);

	   printf("		%2d %2d\n",
	   printf("   printf|%d|\n", NUMBER)-12,
	ft_printf("ft_printf|%d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%1d|\n", NUMBER)-12,
	ft_printf("ft_printf|%1d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%2d|\n", NUMBER)-12,
	ft_printf("ft_printf|%2d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%3d|\n", NUMBER)-12,
	ft_printf("ft_printf|%3d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%4d|\n", NUMBER)-12,
	ft_printf("ft_printf|%4d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%5d|\n", NUMBER)-12,
	ft_printf("ft_printf|%5d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%6d|\n", NUMBER)-12,
	ft_printf("ft_printf|%6d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%7d|\n", NUMBER)-12,
	ft_printf("ft_printf|%7d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%8d|\n", NUMBER)-12,
	ft_printf("ft_printf|%8d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%9d|\n", NUMBER)-12,
	ft_printf("ft_printf|%9d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10d|", NUMBER)-11);




	   printf("\n	width	-%d\n\n", NUMBER);




	   printf("		%2d %2d\n",
	   printf("   printf|%d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%1d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%1d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%2d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%2d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%3d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%3d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%4d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%4d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%5d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%5d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%6d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%6d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%7d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%7d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%8d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%8d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%9d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%9d|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10d|", -NUMBER)-11);



	   printf("\n	precision	%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%.d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.0d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.0d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.1d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.1d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.2d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.2d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.3d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.3d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.4d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.4d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.5d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.5d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.6d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.6d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.7d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.7d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.8d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.8d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.9d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.9d|", NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%.10d|\n", NUMBER)-12,
	ft_printf("ft_printf|%.10d|", NUMBER)-11);



	   printf("\n	precision	-%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%.d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.0d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.0d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.1d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.1d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.2d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.2d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.3d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.3d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.4d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.4d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.5d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.5d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.6d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.6d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.7d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.7d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.8d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.8d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.9d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.9d|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%.10d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.10d|", -NUMBER)-11);



	   printf("\n	width and precision	%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%10.d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.0d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.0d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.1d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.1d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.2d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.2d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.3d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.3d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.4d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.4d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.5d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.5d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.6d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.6d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.7d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.7d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.8d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.8d|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.9d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.9d|", NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10.10d|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.10d|", NUMBER)-11);



	   printf("\n	width and precision	-%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%10.d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.0d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.0d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.1d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.1d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.2d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.2d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.3d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.3d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.4d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.4d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.5d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.5d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.6d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.6d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.7d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.7d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.8d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.8d|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.9d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.9d|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10.10d|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.10d|", -NUMBER)-11);
}

