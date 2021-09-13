# @Author alacic gu


def quick_sort(arr, start, end):
    if start >= end:
        return

    pivot_index = end
    raw_start_index = start
    pivot = arr[pivot_index]

    while start < end:
        while (start < end) and (arr[start] <= pivot):
            start += 1
        while (arr[end] >= pivot) and (end > start):
            end -= 1
        if start < end:
            arr[start], arr[end] = arr[end], arr[start]

    arr[pivot_index], arr[end] = arr[end], arr[pivot_index]

    quick_sort(arr, raw_start_index, end-1)
    quick_sort(arr, end+1, pivot_index)


if __name__ == "__main__":
    arr = [1, 5, 6, 3, 4, 7, 8, 9, 5, 4, 7, 5]
    arr_size = len(arr)
    print(f"Before sorted, arr is {arr}")
    quick_sort(arr, 0, arr_size - 1)
    print(f"After sorted, arr is {arr}")
