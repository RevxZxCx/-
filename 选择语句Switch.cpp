#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int day = 0;
	printf("����һ����������\n");
	scanf("%d", &day);//����㡪��scanf������Ҫȥ��ַ����
		switch (day)
		{
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������"); break;
		default:
			printf("��������");
	     }
		//˳����Ըı䣬û���ϸ�Ҫ��
	return 0;
}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++;
			n++;
			break;
		}
	case 4:m++;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}