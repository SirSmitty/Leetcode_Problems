class Solution(object):
    def maximumWealth(self, accounts):
        Max = 0;
        for num in accounts:
            indSal = 0
            for total in num:
                indSal += total
            if(indSal > Max):
                Max = indSal
        return Max
            
        