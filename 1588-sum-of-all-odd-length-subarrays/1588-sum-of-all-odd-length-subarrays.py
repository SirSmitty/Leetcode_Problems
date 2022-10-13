class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        n = len(arr)
        res = 0
        for l in xrange(1, n + 1, 2):
            for i in xrange(n - l + 1):
                res += sum(arr[i:i + l])
        return res
        