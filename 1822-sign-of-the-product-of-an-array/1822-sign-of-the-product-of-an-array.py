class Solution:
    def arraySign(self, nums: List[int]) -> int:
        if(nums.count(0) > 0): return 0
        neg = 0
        for num in nums:
            if num < 0:
                neg +=1
        if neg % 2 == 0:
            return 1
        else:
            return -1