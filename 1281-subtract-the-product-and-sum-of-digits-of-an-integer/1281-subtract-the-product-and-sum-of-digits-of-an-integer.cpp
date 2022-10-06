class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = 0;
        int sum_mult = 1;
        int sum_add = 0;
        while (n > 0){
            num = n%10;
            n /= 10;
            sum_mult *= num;
            sum_add += num;
        }
        num = sum_mult - sum_add;
        return num;
    }
};