class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        addsum = 0
        multsum = 1
        while n > 0:
            num = n % 10
            n = n // 10
            addsum += num
            multsum *= num
        return multsum -addsum