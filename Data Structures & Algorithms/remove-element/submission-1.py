class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        left = 0
        right = len(nums)-1
        while(left<=right):
            if(nums[right] == val):
                right-=1
                continue
            if(nums[left] == val):
                nums[right], nums[left] = nums[left], nums[right]
                left+=1
                right-=1
            elif(nums[left]!=val):
                left+=1
        return left