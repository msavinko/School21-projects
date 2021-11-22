#include <stdio.h>
#include <stdarg.h>

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

// float average(int num, ...)
// {
// 	int total = 0;
// 	va_list ap; //указатель в стеке аргументов
// 	va_start(ap, num); //инициализация
// 	for (int i = 0; i < num; i++)
// 		total += va_arg(ap, int);
// 	va_end(ap); // очистка
// 	return (float)total/num;
// }
 
int main(void)
{   
	// float x = average(3, 4,5,6);
	// printf("%f", x);
	printf("");
	printf("%%-10.4d: ...|%-10.4d|...\n", 5);
	printf("%%2.4d:   ...|%2.4d|...\n", 5);
	printf("%%12.4d:  ...|%12.4d|...", 5);

    return 0;
}
