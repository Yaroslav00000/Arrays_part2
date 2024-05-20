#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int arr[] = { 1, 2, 0, 4, 0, 3, 0, 5 };
	int n = 8;
	int j = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] != 0) {
			arr[j++] = arr[i];
		}
	}
	while (j < n) {
		arr[j++] = -1;
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}