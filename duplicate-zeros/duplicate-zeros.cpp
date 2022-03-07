class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr.pop_back();
                ans.push_back(arr[i]);
                             ans.push_back(arr[i]);
            
        }else{
                arr.pop_back();
                ans.push_back(arr[i]);
            }
    }
        for(int i=0;i<n;i++){
            arr.push_back(ans[i]);
        }
        ans.clear();
    }
};