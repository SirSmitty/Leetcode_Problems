class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int temp = INT_MIN;
        if(nums.size() >= 1){
            for(int i = 0; i < nums.size();i++){
                sum += nums[i];
                if (sum > temp){temp = sum;}
                if(sum  < 0){sum = 0;}
            } // end of for
            return temp;
        }else{
            return -1;
        }

    } // end of function
};