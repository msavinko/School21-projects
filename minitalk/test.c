#include <stdio.h>
#include <limits.h>
 
void printbits (int n) {
    int i;
    for (i = CHAR_BIT - 1; i >= 0; i--) {
        printf("%d", (n & (1 << i)) != 0);
    }
    printf("\n");
}
 
int main() {
    unsigned char a, b, c;
    unsigned char res;
 
    a = 1; b = 0; c = 0;
    res = c | b << 1 | a << 2;
    printbits(res);
 
    a = 0; b = 1; c = 1;
    res = c | b << 1 | a << 2;
    printbits(res);
 
    a = 1; b = 0; c = 1;
    res = c | b << 1 | a << 2;
    printbits(res);
 
    //_getch();
    return 0;
}