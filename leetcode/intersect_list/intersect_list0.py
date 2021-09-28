from types import List


class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        i = j = 0
        len_nums1 = len(nums1)
        len_nums2 = len(nums2)
        nums1 = sorted(nums1)
        nums2 = sorted(nums2)
        results = []
        while i < len_nums1 and j < len_nums2:
            if nums1[i] < nums2[j]:
                i = i+1
            elif nums1[i] > nums2[j]:
                j = j+1
            else:
                results.append(nums1[i])
                i = i+1
                j = j+1
        return results
