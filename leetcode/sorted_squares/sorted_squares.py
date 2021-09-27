from types import List


class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left, right = 0, len(nums) - 1
        results = []
        while left <= right:
            left_sqaure = nums[left] ** 2
            right_square = nums[right] ** 2
            if left_sqaure > right_square:
                results.append(left_sqaure)
                left += 1
            else:
                results.append(right_square)
                right -= 1
        return results[::-1]
