class Solution {
public:
    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
  unordered_map<char,int>m;
        for(auto it:s){
            m[it]++;
        }
        vector<pair<char,int>>v;
        for(auto i:m){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        string ans;
        for(auto c:v){
            for(int i=0;i<c.second;i++){
                ans+=c.first;
            }
            
        }
        return ans;
    }
};