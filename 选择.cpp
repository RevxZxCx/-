#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input = 0;
	printf("���ţ�ư���Ҫ��Ҫ����ţ���ǣ�1/0\n");
	printf("�������ѡ��>:");
	scanf("%d", &input);
	if (input == 1)
		printf("������Ϊ�Լ���ţ�ư���");
	else
		printf("�������");
	return 0;
}