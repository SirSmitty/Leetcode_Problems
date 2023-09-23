class Solution(object):
    def twoSum(self, nums, target):
        num_dict = {}
        for i,num in enumerate(nums):
            mid = target - num
            if mid in num_dict:
                return [num_dict[mid],i]
            num_dict[num] = i
        return []
            

        