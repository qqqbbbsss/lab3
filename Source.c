#include <locale.h>

#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS"); 
	int num;
	int B;
	puts("������� ����� A");
	scanf("%d", &num);
	printf("������� ����� A\n", num);

	puts("������� ����� B");
	scanf("%d", &B);
	printf("������� ����� B=%d", B);

}