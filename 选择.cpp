#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input = 0;
	printf("你好牛逼啊，要不要试试牛逼糖？1/0\n");
	printf("输入你的选择>:");
	scanf("%d", &input);
	if (input == 1)
		printf("你真以为自己很牛逼啊？");
	else
		printf("尼玛滚！");
	return 0;
}