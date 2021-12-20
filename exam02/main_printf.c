
#include <stdio.h>
int ft_printf(const char *format, ...);

int main(void)
{
	int one = 0, two = 0;
	// one += ft_printf("string: --|%11s|--\n", "welcome");
	// two += printf("string: --|%11s|--\n", "welcome");
	// ft_printf("--|%10.10s|--\n", "number");
	// printf("--|%10.10s|--\n", "number");
	// ft_printf("%10.2s\n", "toto");
	// printf("%10.2s\n", "toto");

	// ft_printf("Magic %s is --|%10.1d|--\n", "number", 42);
	// printf("Magic %s is --|%10.1d|--\n", "number", 42);
	one += ft_printf("MY: Hexadecimal for %2.6d is %8.6x\n", -42, 42);
	two += printf("OR: Hexadecimal for %2.6d is %8.6x\n", -42, 42);



	// one += ft_printf("my funct: %d\n", 23);
	// two += printf("original: %d\n", 23);
	
	printf("\nmy funct: %d\noriginal: %d", one, two);
	return (0);
}