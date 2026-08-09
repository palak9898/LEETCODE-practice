class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = [x*x for x in nums]
        result.sort()
        return result
        