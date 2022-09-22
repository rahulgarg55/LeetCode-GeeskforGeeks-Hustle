class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         unordered_map<int,int>m;     
        for(int i=0; i<nums.size(); i++)  
           m[nums[i]]++;
        
        int pairs=0, cb;
        for(auto c:m){
        
            cb = c.second*(c.second-1) / 2;   
            pairs+=cb;
        }
        return pairs; 

    }
};