#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int arr[] = { 5,-8, 10, -15, 1, 0, -6, 4, -3, 10};
	int arr_1[5];
	int arr_2[5];
	for (int i = 0; i < 5; i++)
	{
		arr_1[i] = arr[i];
		arr_2[i] = arr[i + 5];
	}
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
	return 0;
}