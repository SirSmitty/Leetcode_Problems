class Solution:
    def isHappy(self, n: int) -> bool:
        working = []
        breaker = 0
        Sum = 0
        
        if(n == 1): return True
        while(n != 1 and breaker < 20):
            while(n > 0):
                num = n % 10
                n = n // 10
                working.append(num)
            n = 0
            for num in working:
                n += num**2
            working.clear()
            if(n == 1):
                return True
            else:
                breaker += 1