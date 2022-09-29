#include<iostream>
using namespace std;
int main()
{
	int year, mon, day;
	cin >> year >> mon >> day;
	cout << "the next day is ";
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		switch (mon)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 32) % 13;
			day = (day + 1) % 32;
			goto cao;
		}
		switch (mon)
		{
		case 2:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 30) % 13;
			day = (day + 1) % 30;
			goto cao;
		case 4:
		case 6:
		case 9:
		case 11:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 31) % 13;
			day = (day + 1) % 31;
			goto cao;
		}
	}
	else
	{
		switch (mon)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 32) % 13;
			day = (day + 1) % 32;
			goto cao;
		}
		switch (mon)
		{
		case 2:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 29) % 13;
			day = (day + 1) % 29;
			goto cao;
		case 4:
		case 6:
		case 9:
		case 11:
			year += ((mon + (day + 1) / 32) / 13);
			mon = (mon + (day + 1) / 31) % 13;
			day = (day + 1) % 31;
			goto cao;
		}
	}
cao:
	if (day == 0)
	{
		day++;
	}
	if (mon == 0)
	{
		mon++;
		cout << year << " " << mon << " " << day;
	}
	else
		cout << year << " " << mon << " " << day;


	return 0;
}
