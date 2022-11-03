class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int length=0;
     unordered_map<string,int>m;
        for(string str:words){
            string temp=str;
            reverse(temp.begin(),temp.end());
            if(m[temp]>0){
                length+=4;
            m[temp]--;
        }else{
                m[str]++;
            }
        }
    for(auto it:m){
        if(it.first[0]==it.first[1] && it.second>0)
            return length+2;
    }
        return length;
    }
};