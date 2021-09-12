# @Author alacic gu


def bubble_sort(arr):
    arr_size = len(arr)
    for i in range(arr_size):
        for j in range(arr_size-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


if __name__ == "__main__":
    arr = [1, 5, 6, 3, 4, 7, 8, 9, 5, 4, 7, 5]
    print(f"Before sorted, arr is {arr}")
    bubble_sort(arr)
    print(f"After sorted, arr is {arr}")
