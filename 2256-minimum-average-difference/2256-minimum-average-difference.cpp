class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
           int n = nums.size();
    if(n == 1) return 0;
    long long sum = 0;
    vector<long long> v;
    for(int i=0; i<n; i++){
        sum += nums[i];
        
        v.push_back(sum);
    }
    
    for(int i=0; i<n; i++){
        int first = v[i]/(i+1);
        
        int second = i == n-1? 0 : (v[n-1]-v[i])/(n-1-i);
        
        v[i] = abs(first-second);
        
        
    }
    int res = INT_MAX;
    int ns=0;
    for(int i=0; i<n; i++) {
        if(res> v[i]) {
            ns=i;
            res=v[i];
        }
        
        //res = min(res,nums[i]);
        
    }
    return ns;
    }
};