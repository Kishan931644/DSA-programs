/*  Write a program to reverse an array or string */
#include <iostream>
using namespace std;

void reverse_array(int arr[], int arr_size)
{
    int reverse_arr[arr_size];
    for (int i = (arr_size - 1); i >= 0; i--)
    {
        reverse_arr[arr_size - (i + 1)] = arr[i];
    }
    arr = reverse_arr;

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 35, 82, 98};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, arr_size);
    return 0;
}
