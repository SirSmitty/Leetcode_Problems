class Solution(object):
    def moveZeroes(self, nums):
        for index,num in enumerate(nums):
            if(num == 0):
                nums.append(nums[index])
                nums.remove(nums[index])
        
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        