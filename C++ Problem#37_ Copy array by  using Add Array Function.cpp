#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int RandomNumber(int From, int To) {

    int RunNum = rand() % (To - From + 1) + From;
    return RunNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& length) {

    for (int i = 0; i < length; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}


void AddNumberOfArray(int arr2[100], int& arrLength, int number) {
    arrLength++;
    arr2[arrLength - 1] = number;
}

void arrayCopy(int arr2[100], int& length2, int arr[100], int length) {

    for (int i = 0; i < length; i++) {
        AddNumberOfArray(arr2, length2, arr[i]);
    }

}


void PrintElementsData(int arr[100], int length) {

    for (int i = 0; i < length; i++) {

        cout << arr[i] << " ";

    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100],arr2[100];
    int length2 = 0;
    int length = ReadPositiveNumber("Enter How many Elements to array?\n");

    FillArrayWithRandomNumbers(arr, length);

    cout << "\nArray 1 elements: ";\
    PrintElementsData(arr, length);

    arrayCopy(arr2, length2, arr, length);

    cout << "\nArray 2 elements after copy: ";\
        PrintElementsData(arr2, length2);

    cout << endl;
    return 0;
}
