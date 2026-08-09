class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        diction = dict()
        for i in range(len(nums)):
            diction[nums[i]] = i 

        for i in range(len(nums)):
            diff = target - nums[i]

            if diff in diction and diction[diff] != i:
                return [i, diction[diff]]
        return []


        