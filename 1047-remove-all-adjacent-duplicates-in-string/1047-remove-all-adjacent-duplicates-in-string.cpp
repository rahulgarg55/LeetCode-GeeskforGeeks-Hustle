class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        
        for(char c:s){
            if(ans.size()>0 && ans.back()==c){
                
                ans.pop_back();
            } else ans.push_back(c);
                
        }
        return ans;
    }
};