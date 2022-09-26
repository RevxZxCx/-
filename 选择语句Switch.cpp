#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int day = 0;
	printf("输入一个数字日期\n");
	scanf("%d", &day);//错误点——scanf函数需要去地址放入
		switch (day)
		{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期七"); break;
		default:
			printf("错误输入");
	     }
		//顺序可以改变，没有严格要求
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