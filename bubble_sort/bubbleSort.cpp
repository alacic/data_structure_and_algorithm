/**
 * bubble sort
 * @Author alacic gu
 */

#include <iostream>

using namespace std;

void swap(int *a, int *b);
void bubbleSort(int arr[], int arr_size);
void printArray(int arr[], int arr_size);

int main()
{
    int arr[]{1, 5, 9, 7, 8, 12, 5, 5, 5, 2};
    cout << "Before sorted, arr is ";
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "After sorted, arr is ";
    printArray(arr, n);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[arr_size - 1] << endl;
}