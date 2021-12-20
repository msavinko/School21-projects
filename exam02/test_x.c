/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:47:01 by ccamie            #+#    #+#             */
/*   Updated: 2021/12/15 20:47:02 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# define NUMBER 12345

int	ft_printf(const char *s, ...);

int	main(void)
{

	   printf("\n	width	%d\n\n", NUMBER);

	   printf("		%2d %2d\n",
	   printf("   printf|%x|\n", NUMBER)-12,
	ft_printf("ft_printf|%x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%1x|\n", NUMBER)-12,
	ft_printf("ft_printf|%1x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%2x|\n", NUMBER)-12,
	ft_printf("ft_printf|%2x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%3x|\n", NUMBER)-12,
	ft_printf("ft_printf|%3x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%4x|\n", NUMBER)-12,
	ft_printf("ft_printf|%4x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%5x|\n", NUMBER)-12,
	ft_printf("ft_printf|%5x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%6x|\n", NUMBER)-12,
	ft_printf("ft_printf|%6x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%7x|\n", NUMBER)-12,
	ft_printf("ft_printf|%7x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%8x|\n", NUMBER)-12,
	ft_printf("ft_printf|%8x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%9x|\n", NUMBER)-12,
	ft_printf("ft_printf|%9x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10x|", NUMBER)-11);




	   printf("\n	width	-%d\n\n", NUMBER);




	   printf("		%2d %2d\n",
	   printf("   printf|%x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%1x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%1x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%2x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%2x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%3x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%3x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%4x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%4x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%5x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%5x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%6x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%6x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%7x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%7x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%8x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%8x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%9x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%9x|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10x|", -NUMBER)-11);



	   printf("\n	precision	%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%.x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.0x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.0x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.1x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.1x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.2x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.2x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.3x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.3x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.4x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.4x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.5x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.5x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.6x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.6x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.7x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.7x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.8x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.8x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.9x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.9x|", NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%.10x|\n", NUMBER)-12,
	ft_printf("ft_printf|%.10x|", NUMBER)-11);



	   printf("\n	precision	-%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%.x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.0x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.0x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.1x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.1x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.2x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.2x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.3x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.3x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.4x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.4x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.5x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.5x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.6x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.6x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.7x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.7x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.8x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.8x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%.9x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.9x|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%.10x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%.10x|", -NUMBER)-11);



	   printf("\n	width and precision	%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%10.x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.0x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.0x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.1x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.1x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.2x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.2x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.3x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.3x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.4x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.4x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.5x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.5x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.6x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.6x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.7x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.7x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.8x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.8x|", NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.9x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.9x|", NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10.10x|\n", NUMBER)-12,
	ft_printf("ft_printf|%10.10x|", NUMBER)-11);



	   printf("\n	width and precision	-%d\n\n", NUMBER);



	   printf("		%2d %2d\n",
	   printf("   printf|%10.x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.0x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.0x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.1x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.1x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.2x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.2x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.3x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.3x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.4x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.4x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.5x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.5x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.6x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.6x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.7x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.7x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.8x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.8x|", -NUMBER)-11);

	   printf("		%2d %2d\n",
	   printf("   printf|%10.9x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.9x|", -NUMBER)-11);
	
	   printf("		%2d %2d\n",
	   printf("   printf|%10.10x|\n", -NUMBER)-12,
	ft_printf("ft_printf|%10.10x|", -NUMBER)-11);
}

