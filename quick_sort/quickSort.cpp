/**
 * quick sort
 * @Author alacic gu
 */

#include <iostream>

using namespace std;

void swap(int *a, int *b);
void quickSort(int arr[], int start, int end);
void printArray(int arr[], int arr_size);

int main()
{
    int arr[]{1, 2, 5, 4, 7, 8, 9, 6, 4, 7, 3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorted, the arr is ";
    printArray(arr, arr_size);
    quickSort(arr, 0, arr_size - 1);
    cout << "After sorted, the arr is ";
    printArray(arr, arr_size);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int arr[], int arr_size)
{
    int i = 0;
    for (; i < arr_size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[arr_size - 1] << endl;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int raw_start = start;
    int pivot_index = end;
    int pivot = arr[pivot_index];

    while (start < end)
    {
        while (start < end && arr[start] <= pivot)
            start++;
        while (start < end && arr[end] >= pivot)
            end--;
        if (start < end)
            swap(arr[start], arr[end]);
    }

    swap(arr[end], arr[pivot_index]);

    quickSort(arr, raw_start, end - 1);
    quickSort(arr, end + 1, pivot_index);
}