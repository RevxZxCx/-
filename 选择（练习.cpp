#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int num = 0;
	printf("����һ������:\n");
	scanf("%d", &num);
	if (0==num%2)
		printf("ż��");
	else
		printf("����\n");
	
	printf("����Ϊ������1-100֮�������\n");
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