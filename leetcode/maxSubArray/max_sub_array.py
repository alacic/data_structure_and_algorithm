from types import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum = nums[0]
        max_pre = 0
        for num in nums:
            max_sum = max(max_sum, max_pre + num)
            max_pre = max(0, max_pre + num)
        return max_sum
