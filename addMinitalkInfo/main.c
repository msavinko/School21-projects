#include <stdio.h>

#include <limits.h>
 
void printbits (int n) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (n & (1 << i)) != 0);
    }
    printf("\n");
}

int main(void)
{
	char c = 'a';
	int num = 64;
	char newchar = 0;
	printf("%c\n", newchar);
	printbits(newchar);
	printbits(c);
	while (num > 0)
	{
		if ((c & num) > 0)
			newchar = newchar | num;
		num /= 2;
		printf("%c\n", newchar);
		printbits(newchar);
	}
	
	return (0);
}

//(symbol >> bytes & 1)
// побитовое или |
// побитовое исключающее или ^
// побитовое и &
// побитовое не ~ (унарный оператор)
// побитовый сдвиг влево <<
// побитовый сдвиг вправо >>

// только с целыми числами