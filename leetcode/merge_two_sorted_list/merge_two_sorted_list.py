from types import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        del nums1[m:]
        del nums2[n:]
        if n == 0 or m == 0:
            nums1.extend(nums2)

        i = j = 0
        while i < m and j < n:
            if nums2[j] < nums1[i]:
                nums1.insert(i, nums2[j])
                m = m+1
                j = j+1
            elif i == m-1:
                nums1.append(nums2[j])
                m = m+1
                j = j+1
            i = i+1
