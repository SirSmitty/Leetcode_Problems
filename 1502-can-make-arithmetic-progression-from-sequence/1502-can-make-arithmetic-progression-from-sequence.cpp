class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int jump = arr[1] - arr[0];
        bool ret = false;
        for(int i = 1;i < arr.size()-1;i++){
            int jump1 = arr[i+1] - arr[i];
            if(jump == jump1){
                ret = true;
            }else
                return false;
        }
        if(arr.size() == 2)
            return true;
        return ret;
    }
};