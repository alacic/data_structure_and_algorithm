# @Author alacic gu


def insert_sort(arr):
    arr_size = len(arr)
    for i in range(1, arr_size):
        value = arr[i]
        for j in range(i, 0, -1):
            if arr[j-1] > value:
                arr[j] = arr[j-1]
            else:
                arr[j] = value
                break


if __name__ == "__main__":
    arr = [1, 5, 6, 3, 4, 7, 8, 9, 5, 4, 7, 5]
    print(f"Before sorted, arr is {arr}")
    insert_sort(arr)
    print(f"After sorted, arr is {arr}")
