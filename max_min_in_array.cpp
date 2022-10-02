// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10, 5, 820, 98};
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "MAX is: " << max;
    cout << endl;
    cout << "MIN is: " << min;

    return 0;
}