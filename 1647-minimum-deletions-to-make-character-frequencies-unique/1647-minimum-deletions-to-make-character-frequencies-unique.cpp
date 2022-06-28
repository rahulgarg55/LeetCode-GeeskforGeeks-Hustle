class Solution {
public:
    int minDeletions(string s) {
   vector<int>freq(26,0);
        set<int>seen; //3 2
        int count=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++; //3 3 2
        }
      
        for(int i=0;i<26;i++){ //1 3 2
            while(freq[i] && seen.find(freq[i])!=seen.end()){
                freq[i]--;
                count++;
            }
            seen.insert(freq[i]);
        }
    
        return count; //O(n+k^2) //k is no of letters //O(26)
    }
};