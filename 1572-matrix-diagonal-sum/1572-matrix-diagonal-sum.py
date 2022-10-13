class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        length  = len(mat)
        
        n = length // 2
        
        summ = 0
        
        for x in range(length):
            summ += mat[x][x]           
            summ += mat[(length-1)-x][x]
            
        if (length % 2 == 1):
            summ -= mat[n][n]       
        
        return summ
    