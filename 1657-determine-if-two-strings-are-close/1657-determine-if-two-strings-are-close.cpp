class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        if(l1!=l2)return false;
        vector<int>f1(128),f2(128);
        vector<int>s1(128),s2(128);
        for(auto c:word1){
            f1[c]++; s1[c]=1;
        }
        for(auto c:word2){
            f2[c]++;s2[c]=1;
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        return f1==f2 &&s1==s2;
    }
};