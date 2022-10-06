class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first = 0;
        int second = 0;
        bool found = false;
        vector<int> out;
        for(int j = 0; j < nums.size(); j++){
            for(int k = j+1; k < nums.size(); k++){
                if (nums[j]+nums[k] == target){
                    out.push_back(j);
                    out.push_back(k);
                    found = true;
                    break;
                } // end of if
            } // end of embedded for
            if (found == true){
                break;
            }
        } // end of parent for
        return out;
    } // end of function
};