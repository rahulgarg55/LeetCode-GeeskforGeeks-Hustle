class Solution {
public:
    vector<int>givefreq(string s){
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        vector<int>max_freq(26,0);
        for(auto &x:words2){
            vector<int>freq=givefreq(x);
            for(int i=0;i<26;i++){
                max_freq[i]=max(freq[i],max_freq[i]);
            }
        }
        for(auto &x:words1){
            vector<int>freq=givefreq(x);
            bool flag=true;
            for(int i=0;i<26;i++){
                if(freq[i]<max_freq[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)ans.push_back(x); //string x is universal string
        }
        return ans;
        
    }
};