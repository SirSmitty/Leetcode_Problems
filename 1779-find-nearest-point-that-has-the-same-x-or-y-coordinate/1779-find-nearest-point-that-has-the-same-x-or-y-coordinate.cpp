class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        vector<vector<int>> valid;
        int n = points.size();
        int min = INT_MAX;
        int ans_idx = -1;
        for(int row = 0; row < n; row++){  
            
            if(x == points[row][0] || y == points[row][1]){
                int tempMin = abs(x - points[row][0]) + abs(y - points[row][1]);
                if (min > tempMin){
                    min = tempMin;
                    ans_idx = row;
                }
            } 
            
        } // end of row
      return ans_idx;
    }
};