class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = []
        postfix = [0]*len(nums)
        temp = 1
        for i in range(len(nums)):
            temp = temp*nums[i]
            prefix.append(temp)

        print(prefix)

        temp = 1
        for i in range(len(nums)-1,-1,-1):
            temp = temp*nums[i]
            postfix[i] += (temp)

        print(postfix)

        res = []
        for i in range(len(nums)-1):
            if i==0:
                res.append(postfix[i+1])
            else:
                res.append(prefix[i-1]*postfix[i+1])
        res.append(prefix[len(nums)-2])
        return res


