class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int temp = INT_MIN;;
        vector<int>subarr;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
            if (sum > temp){temp = sum;}
            if(sum  < 0){sum = 0;}
        } // end of for
        return temp;
    } // end of function
};