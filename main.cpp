#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int arr_1[] = { 1, -5, 0, 9, 4,};
	int arr_2[] = { 5, 2, -1, -8 ,9 };
	int arr_3[10];
	int n = 5;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr_1[i] > 0)
		{
			arr_3[index++] = arr_1[i];
		}
		if (arr_2[i] > 0)
		{
			arr_3[index++] = arr_2[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr_1[i] == 0)
		{
			arr_3[index++] = arr_1[i];
		}
		if (arr_2[i] == 0)
		{
			arr_3[index++] = arr_2[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr_1[i] < 0)
		{
			arr_3[index++] = arr_1[i];
		}
		if (arr_2[i] < 0)
		{
			arr_3[index++] = arr_2[i];
		}
	}
	cout << "Array 1: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << " ";
	}
	cout << endl;
	cout << "Array 2: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr_2[i] << " ";
	}
	cout << endl;
	cout << "Array 3: ";
	for (int i = 0; i < index; i++)
	{
		cout << arr_3[i] << " ";
	}
	cout << endl;
}