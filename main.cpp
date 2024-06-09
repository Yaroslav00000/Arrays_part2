#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int arr_1[] = { 1, -5, 0, 9, 4, };
	int arr_2[] = { 5, 2, -1, -8 ,9 };
	int arr_3[5];
	cout << "Array 1: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr_1[i] << " ";
	}
	cout << endl;
	cout << "Array 2: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr_2[i] << " ";
	}
	cout << endl;
	cout << "Array_rezult: ";
	for (int i = 0; i < 5; i++)
	{
		arr_3[i] = arr_1[i] + arr_2[i];
		cout << arr_3[i] << " ";
	}
	cout << endl;
	return 0;
}