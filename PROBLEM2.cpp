//Create a C++ Program that store temperature of Province A, Province B and Province C 
//for a week (seven days) and display it

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b;
	double Temp[3][7];
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;

	for (a = 0; a < 3; a++)
	{
	for (b = 0; b < 7; b++)
	{
	if (a == 0)
	{
	cout << "Province A Day " << b+1 << ": ";
	}
	else if (a == 1)
	{
	cout << "Province B Day " << b+1 << ": ";
	}
	else
	{
	cout << "Province C Day " << b+1 << ": ";
	}
	cin >> Temp[a][b];
	}
	}

	cout << "Displaying Values: " << endl;
	for (a = 0; a < 3; a++)
	{
	for (b = 0; b < 7; b++)
	{
	if (a == 0)
	{
	cout << "Province A Day " << b+1 << "= ";
	}
	else if (a == 1)
	{
	cout << "Province B Day " << b+1 << "= ";
	}
	else
	{
	cout << "Province C Day " << b+1 << "= ";
	}
	cout << Temp[a][b] << endl;
	}
	}

	_getch();
	return 0;
}
