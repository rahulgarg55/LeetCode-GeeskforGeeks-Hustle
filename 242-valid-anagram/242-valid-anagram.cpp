class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>scount(26,0);
        vector<int>tcount(26,0);
        for(int i=0;i<s.size();i++){
            scount[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            tcount[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(scount!=tcount)return false;
        }
        return true;
            
    
        
    }
};