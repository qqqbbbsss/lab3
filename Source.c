#include <locale.h>

#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS"); 
	int num;
	int B;
	puts("¬ведите число A");
	scanf("%d", &num);
	printf("¬ведено число A\n", num);

	puts("¬ведите число B");
	scanf("%d", &B);
	printf("¬ведено число B=%d", B);

}