#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int num = 0;
	printf("输入一个数字:\n");
	scanf("%d", &num);
	if (0==num%2)
		printf("偶数");
	else
		printf("奇数\n");
	
	printf("下面为你生成1-100之间的奇数\n");
	int nb = 0;
	while (nb <= 100)
		if(0==nb%2)
				nb++;
		else
		{

			printf("%d\n", nb);
				nb++;
		}
	return 0;
}