#include <stdio.h>

int main(void)
{
	int a, b;

	printf("태어난 년도 : ");
	scanf_s("%d", &a);
	printf("현재 년도 : ");
	scanf_s("%d", &b);

	printf("당신이 태어난 년도는 %d년이고 현재 년도는 %d년이므로 당신의 나이는 %d살입니다", a, b, b-a+1);

	return 0;
}