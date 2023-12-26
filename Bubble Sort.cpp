#include <iostream> 
#include <conio.h>
using namespace std;

void swap(int*, int*);
void main() {


	int a[10], n, j, i;
	cout << "enter length of array elements: " << endl;
	cin >> n;
	cout << "Enter array elements: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Unsorted form of array is as follows: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			swap(&a[j], &a[j + 1]);
		}
	}
	cout << "Sorted form of array is: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
void swap(int* x, int* y) {
	int temp;
	if (*x > *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
}