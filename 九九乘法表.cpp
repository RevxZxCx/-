#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf("%d*%d=%2d ", x, y, x * y);
			if(x==y)
	
			printf("\n");
	   }
	}


	return 0;
}