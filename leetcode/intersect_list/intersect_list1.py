from collections import Counter
from types import List


class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        if len(nums1) > len(nums2):
            return self.intersect(nums2, nums1)

        results = []
        nums2_count = Counter(nums2)
        for num in nums1:
            if num in nums2_count and nums2_count.get(num) > 0:
                results.append(num)
                nums2_count[num] -= 1

        return results
