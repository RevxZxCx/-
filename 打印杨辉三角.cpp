#include <iostream>
using namespace std;

//int main()
//{
//	int arr[] = { 1,2,1,2 };
//	cout << &arr << endl;//整个数组的地址
//	cout << arr<<endl;//首元素地址
//	cout << &arr + 1 << endl;//下一个空间的地址
//	cout << arr + 1 << endl;//arr[1]的地址
//
//
//	return 0;
//}

//打印杨辉三角


int main()
{
	int arr[10][10];
	for (int n = 0; n < 10; n++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[n][j] = 0;
		}
	}
	for (int n = 0; n < 10; n++)
	{
		for (int j = 0; j <=n; j++)
		{
			if (n == 0 || j == 0)
				arr[n][j] = 1;
			else
				arr[n][j] = arr[n - 1][j] + arr[n - 1][j - 1];
		}
	}
	for (int n = 0; n < 10; n++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[n][j] != 0)
				cout << arr[n][j]<<" ";
			else
			{
				cout << endl;
				break;
			}
		}
	}

	return 0;
}