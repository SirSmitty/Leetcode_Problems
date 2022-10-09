class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    if(s1==s2)
        return true;
    
    vector<int> index;
    for(int i=0;i<s1.length();i++)
    {
     if(s1[i]!=s2[i]){
         index.push_back(i);
    }
    }
    if(index.size()==2){
        int i1=index[0];
        int i2=index[1];
        if(s1[i1]==s2[i2] && s1[i2]==s2[i1])
            return true;
    }
     
    return false;
}
};