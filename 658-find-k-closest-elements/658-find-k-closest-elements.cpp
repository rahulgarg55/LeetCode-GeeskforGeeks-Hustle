class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
           vector<pair<int,int>>v;
        vector<int>ans;
        
        for(int i=0;i<arr.size();i++){
            v.push_back({abs(x-arr[i]),arr[i]});
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0; i<k; i++){
            ans.push_back(v[i].second);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};