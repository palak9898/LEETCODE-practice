class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        result = []
        k=0
        nums.sort()
        for k in range(len(nums)-2):
            if k > 0 and nums[k] == nums[k - 1]:
                continue
            target = nums[k]
            left = k+1         
            right = len(nums)- 1
            while(left < right):
                if(nums[left] + nums[right] > -target):
                    right-=1
                elif(nums[left] + nums[right] < -target):
                    left+=1
                else:
                    result.append([target, nums[left], nums[right]])
                    left+=1
                    right-=1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1

                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
        return result

                
        