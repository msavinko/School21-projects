#include <stdio.h>

#include <limits.h>
 
void printbits (int n) {
    int i = 7;
	while (i >= 0)
	{
        printf("%d", (n & (1 << i)) != 0);
		i--;
    }
    printf("\n");
}

int main(void)
{
	char x = 'c';
	char y;
	int i = 7;
	while (i >= 0)
	{
		y = x & 1;
		printf("\n%i. y = %c, x = %c\n", i, y, x);
		printbits(y);
		printbits(x);
		x = x >> 1;
		i--;
	}

	return (0);
}