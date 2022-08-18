class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        priority_queue<int>pq;
        for(auto it:arr)mp[it]++;
        for(auto it:mp)pq.push(it.second);
        int sum=0,setcount=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
            setcount++;
        
        if(sum>=n/2)return setcount;
    }
    return 0;
    }
};