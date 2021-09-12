/**
 * merge sort
 * @Author alacic gu
 */

#include <iostream>

using namespace std;

void mergeSort(int arr[], int arr_size);
void printArray(int arr[], int arr_size);

int main()
{
    int arr[]{1, 5, 9, 7, 8, 12, 5, 5, 5, 2};
    cout << "Before sorted, arr is ";
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    mergeSort(arr, n);
    cout << "After sorted, arr is ";
    printArray(arr, n);
}

void mergeSort(int arr[], int arr_size)
{
    if (arr_size <= 1)
        return;

    int mid = arr_size / 2;
    auto *L = new int[mid];
    auto *R = new int[arr_size - mid];

    // copy value
    int i = 0, j = 0, k = 0;
    for (k = 0; k < arr_size; k++)
    {
        if (k < mid)
        {
            L[i] = arr[k];
            i++;
        }
        else
        {
            R[j] = arr[k];
            j++;
        }
    }

    // recursion
    mergeSort(L, mid);
    mergeSort(R, arr_size - mid);

    // merge step
    i = 0;
    j = 0;
    k = 0;
    while (i < mid && j < arr_size - mid)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    while (i < mid)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < arr_size - mid)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] R;
    delete[] L;
}

void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[arr_size - 1] << endl;
}
