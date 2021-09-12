/**
 * insert sort
 * @Author alacic gu
 */

#include <iostream>

using namespace std;

void insertSort(int arr[], int arr_size);
void printArray(int arr[], int arr_size);

int main()
{
    int arr[]{1, 5, 9, 7, 8, 12, 5, 5, 5, 2};
    cout << "Before sorted, arr is ";
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    insertSort(arr, n);
    cout << "After sorted, arr is ";
    printArray(arr, n);
}

void insertSort(int arr[], int arr_size)
{
    for (int i = 1; i < arr_size; i++)
    {
        int value = arr[i];
        for (int j = i; j >= 0; j--)
        {
            if (arr[j - 1] > value)
            {
                arr[j] = arr[j - 1];
                arr[j - 1] = value;
            }
            else
                break;
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

// answer good than mine at https://www.geeksforgeeks.org/insertion-sort/
// void insertSort(int arr[], int arr_size)
// {
//     int i, key, j;
//     for (i = 1; i < arr_size; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }