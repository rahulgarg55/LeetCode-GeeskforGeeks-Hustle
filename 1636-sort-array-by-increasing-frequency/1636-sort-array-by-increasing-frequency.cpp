class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        
        if(a.second==b.second)return a.first>b.first;
return a.second<b.second;
     //   return a<b; //ascending order
       // return a>b; //descending order
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto n:nums)mp[n]++;
        vector<pair<int,int>>vp;
        for(auto n:nums){
            vp.push_back({n,mp[n]}); //element and its frequency;
        }
        vector<int>ans;
        sort(vp.begin(),vp.end(),cmp);//need custom function 
    for(auto i:vp)
        ans.push_back(i.first);
        return ans;
        
        
        
      
    }
};