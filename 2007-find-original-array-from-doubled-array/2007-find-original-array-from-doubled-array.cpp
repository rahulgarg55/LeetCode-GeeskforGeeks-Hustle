class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
    map<int, int>m;
        int n=changed.size();
        if(n%2==1)return{};
    for (int i = 0; i < changed.size(); i++) {
        m[changed[i]]++;
    }
        sort(changed.begin(),changed.end());
    vector<int> original;
    for (int i = 0;i < changed.size();i++) {
        
        int freq1 = m[changed[i]];//getting frequencies of numbers
        int freq2=m[2*changed[i]];
        if (freq1 >0 && freq2>0) {
                  original.push_back(changed[i]);
            // Decrement the frequency of
            // the number
            
            m[changed[i]]--;
            // Decrement the frequency of
            // the number having double value
            m[2*changed[i]]--;
        }else if(freq1>0 && freq2==0){
            return {};
        }
    }
    return original;
    }
};