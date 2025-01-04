#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void array_a(int arr[100], int& length)
{
	length = 10;
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;
	arr[4] = 2;
	arr[5] = 2;
	arr[6] = 2;
	arr[7] = 3;
	arr[8] = 3;
	arr[9] = 3;
}
void print_array(int arr[100], int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void add_number_to_array(int number, int arr[100], int& length)
{
	length++;
	arr[length - 1] = number;
}
bool is_num_in_array(int number, int arr2[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr2[i] == number)
		{
			return true;
		}
	}
    return false;
}
void copy_array(int arr[100], int arr2[100], int length, int &length2)
{
	for (int i = 0; i < length; i++)
	{
		if (is_num_in_array(arr[i], arr2, length) != true)
		{
			add_number_to_array(arr[i], arr2, length2);
		}
	}
}
int main()
{
	int arr[100]; int arr2[100]; int length=10; int length2 = 0;
	array_a(arr, length);
	print_array(arr, length);
	cout << "array2: " << endl;
	copy_array(arr, arr2, length, length2);
	print_array(arr2, length2);
}
