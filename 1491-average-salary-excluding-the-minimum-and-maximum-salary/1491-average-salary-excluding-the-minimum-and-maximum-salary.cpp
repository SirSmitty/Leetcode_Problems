class Solution {
public:
    double average(vector<int>& salary) {
        int length = salary.size();
        double avg = 0;
        double min = 99999999;
        double max = 0;
        for(int i = 0; i < length; i++){
            if(salary[i] < min)
                min = salary[i];
            if(salary[i] > max)
                max = salary[i];
            avg += salary[i];
        }
        avg = avg - (max+min);
        avg = avg/(length-2);
        return avg;
    }
};