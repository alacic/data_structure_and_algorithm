from types import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        already_looked = dict()
        for i, num in enumerate(nums):
            if (target - num) in already_looked:
                return [already_looked[target - num], i]
            else:
                already_looked[num] = i
