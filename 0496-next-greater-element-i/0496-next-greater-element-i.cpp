class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            for (int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int val = -1;
                    while(j < nums2.size()){
                        if(nums1[i] < nums2[j]){
                            val  = nums2[j];
                            break;
                        }else{
                            j++;
                        }
                    }
                  ans.push_back(val);
                }
            }
        }
        return ans;
    }// end of function
};