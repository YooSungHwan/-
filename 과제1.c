#include <stdio.h>

int main(void)
{
	int a, b;

	printf("�¾ �⵵ : ");
	scanf_s("%d", &a);
	printf("���� �⵵ : ");
	scanf_s("%d", &b);

	printf("����� �¾ �⵵�� %d���̰� ���� �⵵�� %d���̹Ƿ� ����� ���̴� %d���Դϴ�", a, b, b-a+1);

	return 0;
}