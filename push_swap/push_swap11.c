#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define	SIZE_NUMS 10

int	main(void)
{//									стек б	|стек а
	int		num[SIZE_NUMS] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t	s = 5;//				это сдвиг, который делает границу между стеками и указывает на первый элемент стека А
//									Стек Б перевёрнут, т.е. порядок 4 3 2 1 10
	int		tmp;//					временное хранение
	size_t	i = 0;//				счетчик

//			делаем ra, переставляя числа последовательно, бывшее первым число перемещая в конец
	tmp = num[s];
	i = s;
	while(i < SIZE_NUMS - 1)
	{
		num[i] = num[i + 1];
		i++;
	}
	num[i] = tmp;
	printf("ra:\t");
//			печатаем стек А если он есть, т.е. граница-сдвиг s меньше размера. 
	i = s;
	while(i < SIZE_NUMS)
		printf("%d ", num[i++]); printf("\n");
//			делаем pa
	s--;
	printf("pa:\t");
//			печатаем стек a
	i = s;
	while(i < SIZE_NUMS)
		printf("%d ", num[i++]); printf("\n");
//			печатаем стек Б, если он есть, т.е. граница-сдвиг s больше нуля
	i = s;
	printf("st.b:\t");
	while (i--)
		printf("%d ", num[i]); printf("\n");
//			делаем sb
	tmp = num[s - 1];
	num[s - 1] = num[s - 2];
	num[s - 2] = tmp;
	printf("sb:\t");
//			печатаем стек б
	i = s;
	while (i--)
		printf("%d ", num[i]); printf("\n");
}
//			RRA/RRB действуют так же как вышеописанный ra, но сохраняется не первый элемент, а последний.
//			rr/ss/rrr просто комбинируются из одиночных.





