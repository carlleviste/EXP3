//Create a C++ program to show the smallest and largest integer, the total, and the average of an array that take 10 elements only.


#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	 int n, t, l, h, ave, num[10];

	 cout << "Input 10 integer values" << endl;

	 for (n = 0; n <= 9; n++)
	 {  
	 cin >> num[n];
	 }

	 l = num[0];
	 h = num[0];
	 t = 0;
	 ave = 0;

	 for (n = 0; n <= 9; n++)
	 {
	 if (l >= num[n]) l = num[n];
	 }

	 for (n = 0; n <= 9; n++)
	 {
	 if (h <= num[n]) h = num[n];
	 }
	
	 for (n = 0; n <= 9; n++)
	 {
	 t += num[n];
	 }

	 for (n = 0; n <= 9; n++)
	 {
	 ave += num[n];
	 }
	 ave /= 10;

	cout << " " << endl;

	cout << "The lowest integer is:" << l  << endl;

	cout << "The highest integer is:" << h << endl;

	cout << "The total value is equal to:" << t  << endl;

	cout << "The average is equal to:" << ave  << endl;	

	_getch();
	return 0;

}
