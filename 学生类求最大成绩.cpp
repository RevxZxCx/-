#include<iostream>
using namespace std;


class Student
{
private:
	int score[4];
	static double Maxav;
public:
	Student(int a=0, int b=0, int c=0, int d=0) 
	{
		score[0] = a;
		score[1] = b;
		score[2] = c;
		score[3] = d;
    }
	
	double Getav()
	{
		int sum=0;
		for (int n = 0; n < 4; n++)
		{
			sum += score[n];
		}
		return sum / 4.0;
	}
	static void GetMaxav(Student arr[], int n);
};
double Student::Maxav = 0;//初始化的时候一定要表明是那个类的静态变量（其实写的时候卡住了）
void Student::GetMaxav(Student arr[],int n)
{
	Student::Maxav= arr[0].Getav();
	for (int i = 0; i < n; i++)
	{
		if (Student::Maxav < arr[i].Getav())
		{
			Student::Maxav = arr[i].Getav();
		}
		
	}
	cout << "最高平均成绩是：" << Maxav << endl;
}


int main()
{
	Student arr[4] = { {40,50,60,70},{80,80,80,80},{65,65,70,84},{20,100,90,50} };
	Student::GetMaxav(arr, 4);
	return 0;
}