# @Author alacic gu


def merge_sort(arr):
    arr_size = len(arr)
    if arr_size > 1:
        mid = arr_size // 2

        L = arr[:mid]
        R = arr[mid:]

        merge_sort(L)
        merge_sort(R)

        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            k += 1
            i += 1

        while j < len(R):
            arr[k] = R[j]
            k += 1
            j += 1


if __name__ == "__main__":
    arr = [1, 5, 6, 3, 4, 7, 8, 9, 5, 4, 7, 5]
    print(f"Before sorted, arr is {arr}")
    merge_sort(arr)
    print(f"After sorted, arr is {arr}")
