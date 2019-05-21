//Create a C++ program which prints the letters in a char array in reverse order and the 

#include <iostream>
#include<cstring>
#include<iomanip>

using namespace std;

int main()
{
	char arr[666], x;
	cout << "Enter elements to be sorted: \n";
	cin >> arr;

	cout << "The reverse order of array: ";

	for (x = strlen(arr); x >= 0; x--)
	{
	cout << arr[x];
	}

	cout << " \n";

	cout << "The size of the Array is = " << strlen(arr) << endl; 
	system("pause");

	getch ();
	return 0;
}