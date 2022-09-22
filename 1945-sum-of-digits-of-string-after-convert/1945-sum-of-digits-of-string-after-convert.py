class Solution(object):
    def getLucky(self, s, k):
        tmp = ""
        for ele in s:
            tmp += str(ord(ele)-96)
        res = 0
        while k>0:
            for x in tmp:
                res+=int(x)
            tmp = str(res)
            res = 0
            k-=1
        return tmp
        