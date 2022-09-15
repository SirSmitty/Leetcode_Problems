class Solution {
public:
    bool rotateString(string s, string goal) {
    int n = s.length(), i=0;
    if(n!=goal.length())
        return false;
    while(i<n)
    {
        if(s==goal)
            return true;
        
        char f = s[0];
        string temp = s.substr(1);
        s = temp + f;
        i++;
    }
    return false;
    } //end of function
};