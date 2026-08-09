class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        closest = nums[0]+ nums[1] + nums[2]
        for k in range(len(nums)-2):
            left = k+1
            right = len(nums)-1

            while left < right:
                total = nums[k]+ nums[left] + nums[right]
                if(abs(total - target) < abs(closest- target)):
                    closest = total
                
                if(total < target):
                    left+=1
                elif(total > target):
                    right-=1
                else:
                    return total
        return closest




        