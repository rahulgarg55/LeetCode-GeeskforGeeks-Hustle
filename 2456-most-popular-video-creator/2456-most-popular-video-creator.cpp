class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& c, vector<string>& id, vector<int>& v) {
      unordered_map<string,long long>mviews;
        unordered_map<string,string>ID;
        unordered_map<string,int>high;
        int n=c.size();
        for(int i=0;i<n;i++){
        mviews[c[i]]+=v[i];
            if(ID.find(c[i])==ID.end()){
                ID[c[i]]=id[i];
                high[c[i]]=v[i];
            }else{
                if(high[c[i]]==v[i])
                    ID[c[i]]=min(ID[c[i]],id[i]); //lexicographically minimum
                else if(v[i]>high[c[i]]){
                    ID[c[i]]=id[i];
                    high[c[i]]=v[i];
                }
            }
        }
        priority_queue<pair<int,string>>pq;
        for(auto x:mviews)pq.push({x.second,x.first});
        vector<vector<string>>ans;
        int popular=pq.top().first;
        while(!pq.empty()&&pq.top().first==popular){
            vector<string>v;
            auto s=pq.top().second;
            pq.pop();
            v.push_back(s);
            v.push_back(ID[s]);
            ans.push_back(v);
        }
        return ans;
    }
};