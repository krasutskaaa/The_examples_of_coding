#include <iostream>
#include <conio.h>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	void show_date(void);
	Date(int, int, int);
	void decrement_date(void);


};


void Date::show_date(void)
{
	cout << "\nThe date is " << day << "/" << month << "/" << year << ".\n";
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::decrement_date(void)
{
	if (day == 1)
	{
		if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11)
		{
			day = 31;
			month -= 1;
		}
		else if (month == 5 || month == 7 || month == 10 || month == 12)
		{
			day = 30;
			month -= 1;
		}
		else if (month == 3)
		{
			day = 28;
			month -= 1;
		}
		else
		{
			year -= 1;
			month = 12;
			day = 31;

		}


	}
	else
		day -= 1;


	cout << "\nThe date decrement is " << day << "/" << month << "/" << year << ".\n";

}

void main()
{
	cout << "Welcome to the program for operating with data.\n";
	int d, m, y;
	cout << "\n\nPlease enter data in next way (dd/mm/yy):\n";
	cin >> d;
	cin >> m;
	cin >> y;
	Date date(d, m, y);
	date.show_date();
	date.decrement_date();
	cout << "\n\nTHAT'S ALL!!!\n\n";
}
