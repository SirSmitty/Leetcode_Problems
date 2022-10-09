class Solution {
public:
    bool isHappy(int n) {
        int breakCon = 0;
        do{
            vector<int> arr;
            int sum = 0;
            while(n > 0){
                int digit = n%10;
                n /= 10;
                arr.push_back(digit);
            }
            for(int i = 0; i < arr.size(); i++){
                sum+=(arr[i]*arr[i]);
            }
            n = sum;
            breakCon++;
            if(breakCon > 50)
                break;
        }while(n != 1);
         if(n == 1)
            return true;
        else
            return false;
    }
};